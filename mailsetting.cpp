#include "mailsetting.h"
MailSetting::MailSetting(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
}
MailSetting::~MailSetting()
{
    delete ui;
}
QString MailSetting::getSenderMail(){return}
QString MailSetting::getSenderMailPassword() {}
QString MailSetting::getRecieverMail() {}
bool MailSetting::IsSavedForMail() {}
