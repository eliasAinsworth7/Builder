/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_File;
    QAction *actionDelete_All_File;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *logLabel;
    QTextEdit *logTextEdit;
    QPushButton *logClearButton;
    QListWidget *solutionContainer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *closeProgramAfter;
    QCheckBox *openLogText;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *setVisualStd;
    QLineEdit *lineEdit_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *SetTimer;
    QPushButton *setMail;
    QMenuBar *menubar;
    QMenu *menuBuildSevr;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1043, 532);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName("actionNew_File");
        actionDelete_All_File = new QAction(MainWindow);
        actionDelete_All_File->setObjectName("actionDelete_All_File");
        widget = new QWidget(MainWindow);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        logLabel = new QLabel(widget);
        logLabel->setObjectName("logLabel");
        logLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(logLabel);

        logTextEdit = new QTextEdit(widget);
        logTextEdit->setObjectName("logTextEdit");
        logTextEdit->setReadOnly(true);

        verticalLayout->addWidget(logTextEdit);

        logClearButton = new QPushButton(widget);
        logClearButton->setObjectName("logClearButton");

        verticalLayout->addWidget(logClearButton);

        solutionContainer = new QListWidget(widget);
        solutionContainer->setObjectName("solutionContainer");

        verticalLayout->addWidget(solutionContainer);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        closeProgramAfter = new QCheckBox(widget_3);
        closeProgramAfter->setObjectName("closeProgramAfter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeProgramAfter->sizePolicy().hasHeightForWidth());
        closeProgramAfter->setSizePolicy(sizePolicy);
        closeProgramAfter->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        closeProgramAfter->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        closeProgramAfter->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout->addWidget(closeProgramAfter);

        openLogText = new QCheckBox(widget_3);
        openLogText->setObjectName("openLogText");

        horizontalLayout->addWidget(openLogText);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        verticalLayout_7 = new QVBoxLayout(widget_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        setVisualStd = new QPushButton(widget_4);
        setVisualStd->setObjectName("setVisualStd");

        horizontalLayout_6->addWidget(setVisualStd);

        lineEdit_3 = new QLineEdit(widget_4);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_6->addWidget(lineEdit_3);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(widget_4);

        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_8 = new QVBoxLayout(frame);
        verticalLayout_8->setSpacing(7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_7->addWidget(pushButton_3);


        verticalLayout_8->addLayout(horizontalLayout_7);

        SetTimer = new QPushButton(frame);
        SetTimer->setObjectName("SetTimer");

        verticalLayout_8->addWidget(SetTimer);

        setMail = new QPushButton(frame);
        setMail->setObjectName("setMail");

        verticalLayout_8->addWidget(setMail);


        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(widget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1043, 25));
        menuBuildSevr = new QMenu(menubar);
        menuBuildSevr->setObjectName("menuBuildSevr");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuBuildSevr->menuAction());
        menuBuildSevr->addSeparator();
        menuBuildSevr->addSeparator();
        menuBuildSevr->addSeparator();
        menuBuildSevr->addAction(actionNew_File);
        menuBuildSevr->addAction(actionDelete_All_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_File->setText(QCoreApplication::translate("MainWindow", "New Solution", nullptr));
        actionDelete_All_File->setText(QCoreApplication::translate("MainWindow", "Delete All Solution", nullptr));
        logLabel->setText(QCoreApplication::translate("MainWindow", "Log Text", nullptr));
        logClearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        closeProgramAfter->setText(QCoreApplication::translate("MainWindow", "Close Program After Build", nullptr));
        openLogText->setText(QCoreApplication::translate("MainWindow", "Open Log Text Line", nullptr));
        setVisualStd->setText(QCoreApplication::translate("MainWindow", "Visual Std", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        SetTimer->setText(QCoreApplication::translate("MainWindow", "Set Timer", nullptr));
        setMail->setText(QCoreApplication::translate("MainWindow", "Set Mails", nullptr));
        menuBuildSevr->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
