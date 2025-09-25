#include "solutionitemwidget.h"

solutionItemWidget::solutionItemWidget(QString t,QWidget* parent) : QWidget(parent),title(t) {
    setupForTimerBools();
    setupSize();
    initiateButtons();
    initiateCheckBoxes();
    initiateFilePart();
    platformComboboxInitiate();
    createMainLayout();
    setupHeader();
    setupLayout();
    connectionForButtons();
}
QString solutionItemWidget::getTitle() const{
    return title;
}
QString solutionItemWidget::getPath() const{
    return solutionPathTextLine->text().trimmed();
}
void solutionItemWidget::createMainLayout(){
    layout = new QVBoxLayout(this);
    headerLayout = new QHBoxLayout();
    bodyLayout = new QHBoxLayout();
}
void solutionItemWidget::setupHeader(){
    titleLabel = new QLabel(title);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 14px;");
    headerLayout->addWidget(titleLabel);
    headerLayout->addStretch();
    headerLayout->addWidget(deleteButton);
}
void solutionItemWidget::setTitleLabel(QString s){
    titleLabel->setText(s);
}
void solutionItemWidget::setupSize(){
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
}
void solutionItemWidget::initiateButtons(){
    editButton = new QPushButton("Edit");
    deleteButton = new QPushButton(" X ",this);
    chooseButton = new QPushButton("Choose");
}
void solutionItemWidget::connectDeleteButton(){
    connect(deleteButton,&QPushButton::clicked,this,&solutionItemWidget::onDeleteButtonClicked);
}
void solutionItemWidget::connectEditButton(){
    connect(editButton,&QPushButton::clicked,this,&solutionItemWidget::onEditButtonClicked);
}
void solutionItemWidget::connectChooseButton(){
    connect(chooseButton,&QPushButton::clicked,this,&solutionItemWidget::onChooseButtonClicked);
}
void solutionItemWidget::initiateCheckBoxes(){
    isSelected = new QCheckBox();
    debugCheckBox = new QCheckBox("Debug");
    releaseCheckBox = new QCheckBox("Release");
    cleanForDebugCheckBox = new QCheckBox("Clean");
    cleanForReleaseCheckBox = new QCheckBox("Clean");
    cleanCheckBox = new QCheckBox("Clean");
    releaseAndCleanLayout = new QVBoxLayout();
    releaseAndCleanLayout ->addWidget(releaseCheckBox);
    releaseAndCleanLayout->addWidget(cleanForReleaseCheckBox);
    debugAndCleanLayout = new QVBoxLayout();
    debugAndCleanLayout->addWidget(debugCheckBox);
    debugAndCleanLayout->addWidget(cleanForDebugCheckBox);
    layoutForCheckboxes = new QHBoxLayout();
    layoutForCheckboxes->addLayout(releaseAndCleanLayout);
    layoutForCheckboxes->addLayout(debugAndCleanLayout);
}
void solutionItemWidget::initiateFilePart(){
    solutionPathTextLine = new QLineEdit();
    layoutForFileChoose = new QHBoxLayout();
    layoutForFileChoose->addWidget(solutionPathTextLine);
    layoutForFileChoose->addWidget(chooseButton);
}
void solutionItemWidget::setupLayout(){
    layout->addLayout(headerLayout);
    bodyLayout->addWidget(isSelected);
    bodyLayout->addLayout(layoutForFileChoose);
    bodyLayout->addLayout(layoutForCheckboxes);
    bodyLayout->addWidget(platformCombox);
    bodyLayout->addStretch();
    bodyLayout->addWidget(editButton);
    layout->addLayout(bodyLayout);
}
void solutionItemWidget::onDeleteButtonClicked(){
    emit requestDelete(this);

}
void solutionItemWidget::onChooseButtonClicked(){
    path = QFileDialog::getOpenFileName(this,"Choose a file");
    if(!path.isEmpty())solutionPathTextLine->setText(path);
}
void solutionItemWidget::platformComboboxInitiate(){
    platformCombox = new QComboBox();
    platformCombox->addItems({"x64","x86"});
}
void solutionItemWidget::onEditButtonClicked(){
    bool ok;
    QString text = QInputDialog::getText(this,"Title Required", "Enter your title",QLineEdit::Normal,"",&ok);
    if(ok && !text.isEmpty()){
        title = text;
        titleLabel->setText(title);
    }
}
bool solutionItemWidget::IsSelected(){
    if(isSelected->isChecked())return true;
    return false;
}
bool solutionItemWidget::isDebugSelected(){
    if(debugCheckBox->isChecked())return true;
    return false;
}
bool solutionItemWidget::isCleanSelected(){
    if(cleanCheckBox->isChecked())return true;
    return false;
}
bool solutionItemWidget::isReleaseSelected(){
    if(releaseCheckBox->isChecked())return true;
    return false;
}
QString solutionItemWidget::getSelectedPlatform(){
    return platformCombox->currentText();
}
QPushButton* solutionItemWidget::getDeleteButton(){
    return deleteButton;
}
QHBoxLayout *solutionItemWidget::getLayoutForCheckboxes(){
    return layoutForCheckboxes;
}
QHBoxLayout *solutionItemWidget::getLayoutForFileChoose(){
    return layoutForFileChoose;
}
QPushButton *solutionItemWidget::getEditButton(){
    return editButton;
}
int solutionItemWidget::getIntervalTimeHour(){
    return intervalTimeHour;
}
int solutionItemWidget::getIntervalTimeMinutes(){
    return intervalTimeMinutes;
}
bool solutionItemWidget::timeSetUp(){
    return isTimeSetUp;
}
bool solutionItemWidget::getIntervalState(){
    return intervalSelected;
}
bool solutionItemWidget::getScheduledState(){
    return scheduledSelected;
}
QTime *solutionItemWidget::getScheduledTime(){
    QTime *scheduled = &scheduledTime;
    return scheduled;
}
void solutionItemWidget::setTitle(QString title1){
    title = title1;
    this->titleLabel->setText(title);
}
void solutionItemWidget::setPath(QString path1){
    path = path1;
    this->solutionPathTextLine->setText(path);
}
void solutionItemWidget::setSelected(bool selected){
    this->selected = selected;
    this->isSelected->setChecked(selected);
}
void solutionItemWidget::setDebug(bool debuged){
    this->debug = debuged;
    this->debugCheckBox->setChecked(debuged);
}
void solutionItemWidget::setCleaned(bool cleaned){
    this->cleaned = cleaned;
    this->cleanCheckBox->setChecked(cleaned);
}
void solutionItemWidget::setReleased(bool released){
    this->released = released;
    this->releaseCheckBox->setChecked(released);
}
void solutionItemWidget::setPlatform(QString platform){
    this->platform = platform;
    this->platformCombox->setCurrentText(platform);
}
void solutionItemWidget::setupForTimerBools(){
    isTimeSetUp = false;
    scheduledSelected = false;
    intervalSelected = false;
}
void solutionItemWidget::connectionForButtons(){
    connectEditButton();
    connectChooseButton();
    connectDeleteButton();
}
void solutionItemWidget::setCleanForDebug(bool cleanForDebug){
    this->cleanForDebug = cleanForDebug;
    this->cleanForDebugCheckBox->setChecked(this->cleanForDebug);
}
void solutionItemWidget::setCleanForRelease(bool cleanForRelease){
    this->cleanForRelease = cleanForRelease;
    this->cleanForReleaseCheckBox->setChecked(this->cleanForRelease);
}
bool solutionItemWidget::isCleanForDebugSelected(){
    if(this->cleanForDebugCheckBox->isChecked())
        return true;
    else
        return false;
}
bool solutionItemWidget::isCleanForReleaseSelected(){
    if(this->cleanForReleaseCheckBox->isChecked())
        return true;
    else
        return false;
}
