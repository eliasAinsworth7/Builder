#ifndef TIMESETTER_H
#define TIMESETTER_H

#include <QWidget>

namespace Ui {
class timeSetter;
}

class timeSetter : public QWidget
{
    Q_OBJECT

public:
    explicit timeSetter(QWidget *parent = nullptr);
    ~timeSetter();

private:
    Ui::timeSetter *ui;
};

#endif // TIMESETTER_H
