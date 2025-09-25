#pragma once

#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QMainWindow>
#include "editwindow.h"

class solutionFileContainer : public QGroupBox
{
    Q_OBJECT
public:
    explicit solutionFileContainer(const QString title,QGroupBox *parent = nullptr);
    QString getPath() const;
private:
    QString path;
    QPushButton *timeSetButton;
    QPushButton *chooseButton;
    QCheckBox *declareCheckbox;
    QCheckBox *cleanCheckbox;
    QCheckBox *releaseCheckbox;
    QLineEdit *solutionPathTextLine;
    QHBoxLayout *layoutForCheckboxes;
    QHBoxLayout *layoutForGroupbox;
    QHBoxLayout *layoutForFileChoose;
    EditWindow *editWindow = nullptr;
    QPushButton *deleteBtn;
protected:
    void resizeEvent(QResizeEvent *event) override{
        QGroupBox::resizeEvent(event);
        //
        deleteBtn->move(width()-deleteBtn->width()-10,0);
    }
private slots:
    void on_timeButton_clicked();
    void on_chooseButton_clicked();
    void on_deleteBtn_clicked();
};

