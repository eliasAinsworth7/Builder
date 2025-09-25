#ifndef MAILSETUP_H
#define MAILSETUP_H


#include <QMainWindow>
#include <qpushbutton.h>
#include <QLabel>

namespace Ui {
class mailSetup;
}

class mailSetup : public QMainWindow
{
    Q_OBJECT

public:
    explicit mailSetup(QWidget *parent = nullptr,QString senderMail="",QString senderMailPassword="",QString recieverMail="");
    ~mailSetup();
    QString getSenderMail() const;
    QString getSenderPassword() const;
    QString getRecieverMail() const;
    QPushButton *getCancelButton();
    QPushButton *getSaveButton();
    void setLogLabel(QString log);
    void setSenderMailText(QString text);
    void setSenderPasswordText(QString text);
    void setRecieverMailText(QString text);

private:
    void showCheckBoxStateChanged(Qt::CheckState t);
    Ui::mailSetup *ui;
    QLabel *logLabel;
    QString senderMail;
    QString senderMailPassword;
    QString recieverMail;
signals:
    void windowClosed();
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // MAILSETUP_H
