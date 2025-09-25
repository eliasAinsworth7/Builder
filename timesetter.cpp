#include "timesetter.h"
#include "ui_timesetter.h"

timeSetter::timeSetter(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::timeSetter)
{
    ui->setupUi(this);
}

timeSetter::~timeSetter()
{
    delete ui;
}
