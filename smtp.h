#ifndef SMTP_H
#define SMTP_H

#include <QObject>
#include <QSs>
#include <QSslSocket>
#include <QTextStream>

class Smtp : public QObject {
    Q_OBJECT
public:
    Smtp(const QString &user, const QString &pass, const QString &host,
         int port = 465, int timeout = 30000);
    ~Smtp();
    void sendMail(const QString &from, const QString &to,
                  const QString &subject, const QString &body);

signals:
    void status(const QString &);

private slots:
    void readyRead();
    void connected();
    void errorReceived(QAbstractSocket::SocketError);
    void stateChanged(QAbstractSocket::SocketState);

private:
    enum State { Tls, HandShake, Auth, User, Pass, Rcpt, Mail, Data, Quit, Close };
    State state;
    QSslSocket *socket;
    QTextStream *text;
    QString user, pass, from, rcpt, msg, host;
    int port;
};
#endif
