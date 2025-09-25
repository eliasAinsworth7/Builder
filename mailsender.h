#pragma once

#include "mailinformation.h"
#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QtConcurrent>
#include <QVBoxLayout>
#include <QDebug>
#include <curl/curl.h>

class MailSender : public QMainWindow {
    Q_OBJECT

public:
    MailSender(QWidget *parent = nullptr,mailInformation *mailInformation = nullptr);
    ~MailSender();

private:
    mailInformation *mailInformation;
    struct Payload {
        const QByteArray *data;
        size_t offset;
    };

private slots:
    void sendMail();
    static size_t payloadSource(void *ptr, size_t size, size_t nmemb, void *userp);
    void startEmailSend(const QString &from, const QString &to, const QString &subject, const QString &body, const QString &password);

protected:
    void showEvent(QShowEvent *event) override;
    void closeEvent(QCloseEvent *event) override;
signals:
    void sendFinished();
    void windowClosed();
};
