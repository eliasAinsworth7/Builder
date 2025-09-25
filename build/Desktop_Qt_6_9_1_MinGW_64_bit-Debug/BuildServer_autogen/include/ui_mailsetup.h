/********************************************************************************
** Form generated from reading UI file 'mailsetup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILSETUP_H
#define UI_MAILSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mailSetup
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QVBoxLayout *senderMailRow;
    QLabel *senderMailLabel;
    QLineEdit *senderMailLineEdit;
    QVBoxLayout *senderPasswordRow;
    QLabel *senderMailPasswordLabel;
    QLineEdit *senderMailPasswordLineEdit;
    QCheckBox *showCHeckBox;
    QVBoxLayout *recieverMailRow;
    QLabel *recieverMailLabel;
    QLineEdit *recieverMailLineEdit;
    QHBoxLayout *buttonsRow;
    QPushButton *saveButton;
    QPushButton *cancelButton;
    QLabel *logLabel;

    void setupUi(QMainWindow *mailSetup)
    {
        if (mailSetup->objectName().isEmpty())
            mailSetup->setObjectName("mailSetup");
        mailSetup->resize(800, 299);
        mailSetup->setMaximumSize(QSize(16777215, 300));
        centralwidget = new QWidget(mailSetup);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setMaximumSize(QSize(16777215, 20));
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(title);

        senderMailRow = new QVBoxLayout();
        senderMailRow->setObjectName("senderMailRow");
        senderMailLabel = new QLabel(centralwidget);
        senderMailLabel->setObjectName("senderMailLabel");
        senderMailLabel->setMaximumSize(QSize(16777215, 20));
        senderMailLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        senderMailRow->addWidget(senderMailLabel);

        senderMailLineEdit = new QLineEdit(centralwidget);
        senderMailLineEdit->setObjectName("senderMailLineEdit");

        senderMailRow->addWidget(senderMailLineEdit);


        verticalLayout_2->addLayout(senderMailRow);

        senderPasswordRow = new QVBoxLayout();
        senderPasswordRow->setObjectName("senderPasswordRow");
        senderMailPasswordLabel = new QLabel(centralwidget);
        senderMailPasswordLabel->setObjectName("senderMailPasswordLabel");
        senderMailPasswordLabel->setMaximumSize(QSize(16777215, 20));
        senderMailPasswordLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        senderPasswordRow->addWidget(senderMailPasswordLabel);

        senderMailPasswordLineEdit = new QLineEdit(centralwidget);
        senderMailPasswordLineEdit->setObjectName("senderMailPasswordLineEdit");

        senderPasswordRow->addWidget(senderMailPasswordLineEdit);

        showCHeckBox = new QCheckBox(centralwidget);
        showCHeckBox->setObjectName("showCHeckBox");

        senderPasswordRow->addWidget(showCHeckBox);


        verticalLayout_2->addLayout(senderPasswordRow);

        recieverMailRow = new QVBoxLayout();
        recieverMailRow->setObjectName("recieverMailRow");
        recieverMailLabel = new QLabel(centralwidget);
        recieverMailLabel->setObjectName("recieverMailLabel");
        recieverMailLabel->setMaximumSize(QSize(16777215, 20));
        recieverMailLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        recieverMailRow->addWidget(recieverMailLabel);

        recieverMailLineEdit = new QLineEdit(centralwidget);
        recieverMailLineEdit->setObjectName("recieverMailLineEdit");

        recieverMailRow->addWidget(recieverMailLineEdit);


        verticalLayout_2->addLayout(recieverMailRow);

        buttonsRow = new QHBoxLayout();
        buttonsRow->setSpacing(7);
        buttonsRow->setObjectName("buttonsRow");
        buttonsRow->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");

        buttonsRow->addWidget(saveButton);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName("cancelButton");

        buttonsRow->addWidget(cancelButton);


        verticalLayout_2->addLayout(buttonsRow);

        logLabel = new QLabel(centralwidget);
        logLabel->setObjectName("logLabel");
        logLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(logLabel);

        mailSetup->setCentralWidget(centralwidget);

        retranslateUi(mailSetup);

        QMetaObject::connectSlotsByName(mailSetup);
    } // setupUi

    void retranslateUi(QMainWindow *mailSetup)
    {
        mailSetup->setWindowTitle(QCoreApplication::translate("mailSetup", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("mailSetup", "Mail Sender/Reciever ", nullptr));
        senderMailLabel->setText(QCoreApplication::translate("mailSetup", "Sender Mail", nullptr));
        senderMailPasswordLabel->setText(QCoreApplication::translate("mailSetup", "Sender Password", nullptr));
        showCHeckBox->setText(QCoreApplication::translate("mailSetup", "Show", nullptr));
        recieverMailLabel->setText(QCoreApplication::translate("mailSetup", "Reciever Mail", nullptr));
        saveButton->setText(QCoreApplication::translate("mailSetup", "Save", nullptr));
        cancelButton->setText(QCoreApplication::translate("mailSetup", "Cancel", nullptr));
        logLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mailSetup: public Ui_mailSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILSETUP_H
