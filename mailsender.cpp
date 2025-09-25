#include "mailsender.h"

MailSender::MailSender(QWidget *parent,class mailInformation *mailInfo) : QMainWindow(parent) {
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);
    mailInformation = mailInfo;
    setCentralWidget(central);
}

MailSender::~MailSender() {
}
void MailSender::showEvent(QShowEvent *event) {
    QWidget::showEvent(event);
    QTimer::singleShot(100, this, &MailSender::sendMail);  // Delay to let UI show
}
void MailSender::sendMail(){
    startEmailSend(mailInformation->getSenderMail(),mailInformation->getRecieverMail(),"Solution Problems Logs",mailInformation->getBody(),mailInformation->getSenderMailPassword());
    close();
}
size_t MailSender::payloadSource(void *ptr, size_t size, size_t nmemb, void *userp) {
    Payload *payload = static_cast<Payload *>(userp);
    size_t buffer_size = size * nmemb;
    size_t remaining = payload->data->size() - payload->offset;

    if (remaining == 0)
        return 0;

    size_t copy_size = qMin(buffer_size, remaining);
    memcpy(ptr, payload->data->constData() + payload->offset, copy_size);
    payload->offset += copy_size;
    return copy_size;
}

void MailSender::startEmailSend(const QString &from, const QString &to, const QString &subject, const QString &body, const QString &password) {
    QFuture<bool> future = QtConcurrent::run([=]() {
        CURL *curl;
        CURLcode res = CURLE_OK;
        struct curl_slist *recipients = nullptr;

        QByteArray mailData;
        mailData.append(QString("To: %1\r\n").arg(to).toUtf8());
        mailData.append(QString("From: %1\r\n").arg(from).toUtf8());
        mailData.append(QString("Subject: %1\r\n").arg(subject).toUtf8());
        mailData.append("Content-Type: text/html; charset=UTF-8\r\n");
        mailData.append("\r\n");
        mailData.append(body.toUtf8());
        mailData.append("\r\n.\r\n"); // IMPORTANT to finish mail body

        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_USERNAME, from.toStdString().c_str());
            curl_easy_setopt(curl, CURLOPT_PASSWORD, password.toStdString().c_str());
            curl_easy_setopt(curl, CURLOPT_URL, "smtps://smtp.gmail.com:465");
            curl_easy_setopt(curl, CURLOPT_USE_SSL, (long)CURLUSESSL_ALL);
            curl_easy_setopt(curl, CURLOPT_MAIL_FROM, ("<" + from + ">").toStdString().c_str());
            recipients = curl_slist_append(recipients, ("<" + to + ">").toStdString().c_str());
            curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);
            curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);

            // Pass the payload
            Payload payload = { &mailData, 0 };
            curl_easy_setopt(curl, CURLOPT_READFUNCTION, payloadSource);
            curl_easy_setopt(curl, CURLOPT_READDATA, &payload);
            curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

            res = curl_easy_perform(curl);
            if (res != CURLE_OK) {
                qWarning() << "curl_easy_perform() failed:" << curl_easy_strerror(res);
            } else {
                qInfo() << "Email sent successfully!";
            }
            curl_slist_free_all(recipients);
            curl_easy_cleanup(curl);
        }
        return res == CURLE_OK;
    });
}
void MailSender::closeEvent(QCloseEvent *event){
    emit windowClosed();
    QWidget::closeEvent(event);
}
