/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *intervalCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBoxHour;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBoxMinute;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *scheduledCheckBox;
    QTimeEdit *timeEdit;
    QPushButton *setUpButton;
    QPushButton *cancelButon;
    QLabel *info;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditWindow)
    {
        if (EditWindow->objectName().isEmpty())
            EditWindow->setObjectName("EditWindow");
        EditWindow->resize(617, 217);
        centralwidget = new QWidget(EditWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(800, 550));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        intervalCheckBox = new QCheckBox(centralwidget);
        intervalCheckBox->setObjectName("intervalCheckBox");

        horizontalLayout->addWidget(intervalCheckBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        spinBoxHour = new QSpinBox(centralwidget);
        spinBoxHour->setObjectName("spinBoxHour");
        spinBoxHour->setEnabled(false);

        horizontalLayout_4->addWidget(spinBoxHour);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(false);

        horizontalLayout_4->addWidget(label);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        spinBoxMinute = new QSpinBox(centralwidget);
        spinBoxMinute->setObjectName("spinBoxMinute");
        spinBoxMinute->setEnabled(false);

        horizontalLayout_3->addWidget(spinBoxMinute);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);

        horizontalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        scheduledCheckBox = new QCheckBox(centralwidget);
        scheduledCheckBox->setObjectName("scheduledCheckBox");

        horizontalLayout_2->addWidget(scheduledCheckBox);

        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setEnabled(false);

        horizontalLayout_2->addWidget(timeEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        setUpButton = new QPushButton(centralwidget);
        setUpButton->setObjectName("setUpButton");

        verticalLayout_2->addWidget(setUpButton);

        cancelButon = new QPushButton(centralwidget);
        cancelButon->setObjectName("cancelButon");

        verticalLayout_2->addWidget(cancelButon);

        info = new QLabel(centralwidget);
        info->setObjectName("info");
        info->setTextFormat(Qt::TextFormat::AutoText);
        info->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(info);

        EditWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 617, 25));
        EditWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditWindow);
        statusbar->setObjectName("statusbar");
        EditWindow->setStatusBar(statusbar);

        retranslateUi(EditWindow);
        QObject::connect(intervalCheckBox, &QCheckBox::toggled, spinBoxHour, &QSpinBox::setEnabled);
        QObject::connect(intervalCheckBox, &QCheckBox::toggled, label, &QLabel::setEnabled);
        QObject::connect(intervalCheckBox, &QCheckBox::toggled, spinBoxMinute, &QSpinBox::setEnabled);
        QObject::connect(intervalCheckBox, &QCheckBox::toggled, label_2, &QLabel::setEnabled);
        QObject::connect(scheduledCheckBox, &QCheckBox::toggled, timeEdit, &QTimeEdit::setEnabled);

        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditWindow)
    {
        EditWindow->setWindowTitle(QCoreApplication::translate("EditWindow", "MainWindow", nullptr));
        intervalCheckBox->setText(QCoreApplication::translate("EditWindow", "Hours and Minutes", nullptr));
        label->setText(QCoreApplication::translate("EditWindow", "Hours", nullptr));
        label_2->setText(QCoreApplication::translate("EditWindow", "Minutes", nullptr));
        scheduledCheckBox->setText(QCoreApplication::translate("EditWindow", "Set a time", nullptr));
        setUpButton->setText(QCoreApplication::translate("EditWindow", "Set", nullptr));
        cancelButon->setText(QCoreApplication::translate("EditWindow", "Cancel", nullptr));
        info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
