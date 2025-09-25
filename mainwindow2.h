#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

namespace Ui {
class mainwindow2;
}

class mainwindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow2(QWidget *parent = nullptr);
    ~mainwindow2();

private:
    Ui::mainwindow2 *ui;
};

#endif // MAINWINDOW2_H
