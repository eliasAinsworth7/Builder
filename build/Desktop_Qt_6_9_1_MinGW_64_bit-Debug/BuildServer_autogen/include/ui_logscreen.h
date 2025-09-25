/********************************************************************************
** Form generated from reading UI file 'logscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSCREEN_H
#define UI_LOGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *logLabel;
    QTextEdit *logTextEdit;
    QPushButton *clearLogTextButton;

    void setupUi(QMainWindow *logScreen)
    {
        if (logScreen->objectName().isEmpty())
            logScreen->setObjectName("logScreen");
        logScreen->resize(800, 600);
        centralwidget = new QWidget(logScreen);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        logLabel = new QLabel(centralwidget);
        logLabel->setObjectName("logLabel");
        logLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(logLabel);

        logTextEdit = new QTextEdit(centralwidget);
        logTextEdit->setObjectName("logTextEdit");
        logTextEdit->setReadOnly(true);

        verticalLayout->addWidget(logTextEdit);

        clearLogTextButton = new QPushButton(centralwidget);
        clearLogTextButton->setObjectName("clearLogTextButton");

        verticalLayout->addWidget(clearLogTextButton);

        logScreen->setCentralWidget(centralwidget);

        retranslateUi(logScreen);

        QMetaObject::connectSlotsByName(logScreen);
    } // setupUi

    void retranslateUi(QMainWindow *logScreen)
    {
        logScreen->setWindowTitle(QCoreApplication::translate("logScreen", "MainWindow", nullptr));
        logLabel->setText(QCoreApplication::translate("logScreen", "Log Screen", nullptr));
        clearLogTextButton->setText(QCoreApplication::translate("logScreen", "Clear Log Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logScreen: public Ui_logScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSCREEN_H
