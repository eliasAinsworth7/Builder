#include "editwindow.h"
#include "ui_editwindow.h"

EditWindow::EditWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditWindow)
{
    ui->setupUi(this);
    setupCheckBoxes();
    setupSpinBoxes();
    setupTimeEdit();
    setupInfo();
    setupIntervalsValues();
    setupScheduledValue();
    connectionForCheckBoxes();
}

EditWindow::~EditWindow()
{
    intervalTimeMinutes = ui->spinBoxMinute->value();
    intervalTimeHour = ui->spinBoxHour->value();
    scheduledTime = ui->timeEdit->time();
    delete ui;
}
void EditWindow::closeEvent(QCloseEvent *event){
    emit windowClosed(); // Inform main window it's closing
    QWidget::closeEvent(event);
}
int EditWindow::getIntervalTimeMinutes() const{
    return intervalTimeMinutes;
}
int EditWindow::getIntervalTimeHour() const{
    return intervalTimeHour;
}
QTime EditWindow::getScheduledTime() const{
    return scheduledTime;
}
bool EditWindow::isIntervalSelected() const{
    return ui->intervalCheckBox->isChecked();
}

void EditWindow::onIntervalCheckBoxStateChanged(Qt::CheckState q)
{
    if(q==Qt::Checked)
    ui->scheduledCheckBox->setChecked(false);
}


void EditWindow::onScheduledCheckBoxStateChanged(Qt::CheckState q)
{
    if(q==Qt::Checked)
    ui->intervalCheckBox->setChecked(false);
}
QPushButton *EditWindow::getSetUpButton() const{
    return ui->setUpButton;
}
QPushButton *EditWindow::getCancelButton() const{
    return ui->cancelButon;
}
bool EditWindow::isScheduledSelected() const{
    return ui->scheduledCheckBox->isChecked();
}

QCheckBox *EditWindow::getIntercalCheckBox() const{
    return intervalCheckBox;
}
QCheckBox *EditWindow::getScheduleCheckBox() const{
    return scheduleCheckBox;
}
QSpinBox *EditWindow::getHourSpin() const{
    return hourSpin;
}
QSpinBox *EditWindow::getMinuteSpin() const{
    return minuteSpin;
}
QTimeEdit *EditWindow::getTimeEdit(){
    return timeEdit;
}
QLabel *EditWindow::getInfoTextLabel() const{
    return info;
}
void EditWindow::setupCheckBoxes(){
    scheduleCheckBox = ui->scheduledCheckBox;
    intervalCheckBox = ui->intervalCheckBox;
}
void EditWindow::setupSpinBoxes(){
    hourSpin = ui->spinBoxHour;
    minuteSpin = ui->spinBoxMinute;
}
void EditWindow::setupTimeEdit(){
    timeEdit = ui->timeEdit;
}
void EditWindow::setupInfo(){
    info = ui->info;
}
void EditWindow::setupIntervalsValues(){
    intervalTimeMinutes = ui->spinBoxMinute->value();
    intervalTimeHour = ui->spinBoxHour->value();
}
void EditWindow::setupScheduledValue(){
    scheduledTime = ui->timeEdit->time();
}
void EditWindow::connectionForCheckBoxes(){
    connect(scheduleCheckBox,&QCheckBox::checkStateChanged,this,&EditWindow::onScheduledCheckBoxStateChanged);
    connect(intervalCheckBox,&QCheckBox::checkStateChanged,this,&EditWindow::onIntervalCheckBoxStateChanged);
}
