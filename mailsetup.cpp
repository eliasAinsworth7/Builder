#include "mailsetup.h"
#include "ui_mailsetup.h"
#include <qmessagebox.h>

mailSetup::mailSetup(QWidget *parent,QString senderMail,QString senderMailPassword,QString recieverMail)
    : QMainWindow(parent)
    , ui(new Ui::mailSetup)
{
    ui->setupUi(this);
    ui->senderMailLineEdit->setText(senderMail);
    ui->senderMailPasswordLineEdit->setText(senderMailPassword);
    ui->recieverMailLineEdit->setText(recieverMail);
    logLabel = ui->logLabel;
    ui->senderMailPasswordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    connect(ui->showCHeckBox,&QCheckBox::checkStateChanged,this,&mailSetup::showCheckBoxStateChanged);
}

mailSetup::~mailSetup()
{
    delete ui;
}
QString mailSetup::getSenderMail() const{
    return ui->senderMailLineEdit->text();
}
QString mailSetup::getSenderPassword()const{
    return ui->senderMailPasswordLineEdit->text();
}
QString mailSetup::getRecieverMail()const{
    return ui->recieverMailLineEdit->text();
}
void mailSetup::closeEvent(QCloseEvent *event){
    emit windowClosed(); // Inform main window it's closing
    QWidget::closeEvent(event);
}
QPushButton *mailSetup::getCancelButton(){
    return ui->cancelButton;
}
QPushButton *mailSetup::getSaveButton(){
    return ui->saveButton;
}
void mailSetup::setLogLabel(QString log){
    logLabel->setText(log);
}
void mailSetup::setSenderMailText(QString text){
    ui->senderMailLineEdit->setText(text);
}
void mailSetup::setSenderPasswordText(QString text){
    ui->senderMailPasswordLineEdit->setText(text);
}
void mailSetup::setRecieverMailText(QString text){
    ui->recieverMailLineEdit->setText(text);
}
void mailSetup::showCheckBoxStateChanged(Qt::CheckState t){
    if(t == Qt::CheckState::Checked){
        ui->senderMailPasswordLineEdit->setEchoMode(QLineEdit::Normal);
    } else if(t==Qt::CheckState::Unchecked){
        ui->senderMailPasswordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    }
}
