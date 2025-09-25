#include "logscreen.h"
#include "ui_logscreen.h"

logScreen::logScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::logScreen)
{
    ui->setupUi(this);
    initializeLS();
    connectionOfCLearButton();
}

logScreen::~logScreen()
{
    delete ui;
}
void logScreen::setLogText(QString s){
    logTextEdit->setText(s);
}
void logScreen::initializeLS(){
    clearButton = ui->clearLogTextButton;
    logTextEdit = ui->logTextEdit;
}
void logScreen::connectionOfCLearButton(){
    connect(clearButton,&QPushButton::clicked,this,&logScreen::clearLogTextClicked);
}
void logScreen::addTextToLogTex(QString s){
    logTextEdit->append(s);
}
void logScreen::clearLogTextClicked(){
    setLogText("");
}
QString logScreen::getText(){
    return logTextEdit->toPlainText();
}
