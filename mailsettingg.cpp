#include "mailsettingg.h"
#include "ui_mailsettingg.h"

mailSettingg::mailSettingg(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mailSettingg)
{
    ui->setupUi(this);
}

mailSettingg::~mailSettingg()
{
    delete ui;
}
