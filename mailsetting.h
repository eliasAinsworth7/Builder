#ifndef MAILSETTING_H
#define MAILSETTING_H

#include <QMainWindow>

namespace Ui {
class MailSetting;
}

class MailSetting : public QMainWindow
{
    Q_OBJECT
public:
    explicit MailSetting(QWidget *parent = nullptr);
    ~MailSetting();
    QString getSenderMail();
    QString getSenderMailPassword();
    QString getRecieverMail();
    bool IsSavedForMail();
private slots:
    bool isSavedForMail;

private:
    Ui::MailSetting *ui;

signals:
};

#endif // MAILSETTING_H
