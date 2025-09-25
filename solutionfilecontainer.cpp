#include "solutionfilecontainer.h"
#include <qfiledialog.h>
#include <qobject.h>

solutionFileContainer::solutionFileContainer(QString title,QGroupBox *parent)
    : QGroupBox{" "+title+" ",parent}
{
    setMaximumHeight(100);
    setMinimumHeight(100);
    deleteBtn = new QPushButton(" X ",this);
    deleteBtn->setFixedSize(20,20);
    deleteBtn->move(this->width() - deleteBtn->width() - 10,0);
    deleteBtn->raise();
    layoutForGroupbox = new QHBoxLayout();
    timeSetButton = new QPushButton("Set Time");
    chooseButton = new QPushButton("Choose");
    declareCheckbox = new QCheckBox("Declare");
    releaseCheckbox = new QCheckBox("Release");
    cleanCheckbox = new QCheckBox("Clean");
    layoutForCheckboxes = new QHBoxLayout();
    layoutForCheckboxes->addWidget(declareCheckbox);layoutForCheckboxes->addWidget(releaseCheckbox);layoutForCheckboxes->addWidget(cleanCheckbox);
    solutionPathTextLine = new QLineEdit();
    layoutForFileChoose = new QHBoxLayout();
    layoutForFileChoose->addWidget(solutionPathTextLine);layoutForFileChoose->addWidget(chooseButton);
    layoutForGroupbox->addLayout(layoutForFileChoose);layoutForGroupbox->addLayout(layoutForCheckboxes);layoutForGroupbox->addWidget(timeSetButton);
    setLayout(layoutForGroupbox);
    connect(timeSetButton,SIGNAL(clicked(bool)),this,SLOT(on_timeButton_clicked()));
    connect(chooseButton,SIGNAL(clicked(bool)),this,SLOT(on_chooseButton_clicked()));
    connect(deleteBtn,&QPushButton::clicked,this,&solutionFileContainer::on_deleteBtn_clicked);
}

QString solutionFileContainer::getPath() const{
    return solutionPathTextLine->text();
}
void solutionFileContainer::on_timeButton_clicked(){

}

void solutionFileContainer::on_chooseButton_clicked(){
    path = QFileDialog::getOpenFileName(this,"Choose file");
    if(!path.isEmpty())solutionPathTextLine->setText(path);
}

void solutionFileContainer::on_deleteBtn_clicked(){
    deleteLater();
}

