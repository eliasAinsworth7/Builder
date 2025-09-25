#ifndef MAILSETTINGG_H
#define MAILSETTINGG_H

#include <QMainWindow>

namespace Ui {
class mailSettingg;
}

class mailSettingg : public QMainWindow
{
    Q_OBJECT

public:
    explicit mailSettingg(QWidget *parent = nullptr);
    ~mailSettingg();

private:
    Ui::mailSettingg *ui;
};

#endif // MAILSETTINGG_H
