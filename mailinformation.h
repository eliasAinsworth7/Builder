#ifndef MAILINFORMATION_H
#define MAILINFORMATION_H
#include <QString>
class mailInformation
{
public:
    mailInformation();
    QString getSenderMail();
    QString getSenderMailPassword();
    QString getRecieverMail();
    QString getBody();
    bool getSavedSitutation();
public slots:
    void setBody(QString body);
    void setSenderMail(QString senderMail);
    void setSenderMailPassword(QString senderMailPassword);
    void setRecieverMail(QString recieverMail);
    void setSavedSitutation(bool isSaved);
private:
    QString body;
    QString senderMail;
    QString senderMailPassword;
    QString recieverMail;
    bool isSaved = false;
};

#endif // MAILINFORMATION_H
