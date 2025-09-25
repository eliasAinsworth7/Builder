/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timer
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QTimeEdit *timeEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Timer)
    {
        if (Timer->objectName().isEmpty())
            Timer->setObjectName("Timer");
        Timer->resize(617, 177);
        centralwidget = new QWidget(Timer);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(800, 550));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setEnabled(false);

        horizontalLayout_4->addWidget(spinBox);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(false);

        horizontalLayout_4->addWidget(label);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setEnabled(false);

        horizontalLayout_3->addWidget(spinBox_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);

        horizontalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout_2->addWidget(checkBox_2);

        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setEnabled(false);

        horizontalLayout_2->addWidget(timeEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        Timer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Timer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 617, 25));
        Timer->setMenuBar(menubar);
        statusbar = new QStatusBar(Timer);
        statusbar->setObjectName("statusbar");
        Timer->setStatusBar(statusbar);

        retranslateUi(Timer);
        QObject::connect(checkBox, &QCheckBox::toggled, spinBox, &QSpinBox::setEnabled);
        QObject::connect(checkBox, &QCheckBox::toggled, label, &QLabel::setEnabled);
        QObject::connect(checkBox, &QCheckBox::toggled, spinBox_2, &QSpinBox::setEnabled);
        QObject::connect(checkBox, &QCheckBox::toggled, label_2, &QLabel::setEnabled);
        QObject::connect(checkBox_2, &QCheckBox::toggled, timeEdit, &QTimeEdit::setEnabled);

        QMetaObject::connectSlotsByName(Timer);
    } // setupUi

    void retranslateUi(QMainWindow *Timer)
    {
        Timer->setWindowTitle(QCoreApplication::translate("Timer", "MainWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("Timer", "Hours and Minutes", nullptr));
        label->setText(QCoreApplication::translate("Timer", "Hours", nullptr));
        label_2->setText(QCoreApplication::translate("Timer", "Minutes", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Timer", "Set a time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timer: public Ui_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
