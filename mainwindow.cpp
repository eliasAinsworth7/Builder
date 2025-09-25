#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mailsender.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    a = 0;
    ui->setupUi(this);
    closeAfter = false;
    intervalSelected = false;
    scheduledSelected = false;
    ui->pushButton_3->setEnabled(false);
    setMinimumSize(1020,100);
    setSOlutionContainer();
    setMenuBarButtons();
    connect(ui->openLogText,&QCheckBox::checkStateChanged,this,&MainWindow::onOpenLogTextStateChanged);
    connect(ui->SetTimer,&QPushButton::clicked,this,&MainWindow::onSetTimerClicked);
    connect(ui->setVisualStd,&QPushButton::clicked,this,&MainWindow::onSetVisualStdClicked);
    connect(ui->closeProgramAfter, &QCheckBox::checkStateChanged,this,&MainWindow::closeAfterCheckBoxChanged);
    connect(ui->setMail,&QPushButton::clicked,this,&MainWindow::setMailClicked);
    loadSOlutionsFromFile("savedSolutions.json");
    setupDynamicOrder();
    openingInitiations();
    tabButtonConfiguration();
    setLogScreen();
}


MainWindow::~MainWindow()
{
    saveSolutionsToFile("savedSolutions.json");
    delete ui;
}

void MainWindow::onNewFileClicked(){
    bool ok;
    QString text = QInputDialog::getText(this,"Title Required", "Enter your title",QLineEdit::Normal,"",&ok);
    if(ok && !text.isEmpty()){
        auto *solution1 = new solutionItemWidget(text);
        auto *item = new QListWidgetItem(ui->solutionContainer);
        item->setSizeHint(solution1->sizeHint());
        ui->solutionContainer->addItem(item);
        ui->solutionContainer->setItemWidget(item,solution1);
        connect(solution1,&solutionItemWidget::requestDelete,this,[=](solutionItemWidget *w){
            for(int i = 0;i < ui->solutionContainer->count();++i){
                QListWidgetItem *it = ui->solutionContainer->item(i);
                if(ui->solutionContainer->itemWidget(it)==w){
                    ui->solutionContainer->removeItemWidget(it);
                    solutionList.removeOne(w);
                    delete it;
                    w->deleteLater();
                    break;
                }
            }
        });
        solutionList.append(solution1);
    } else if(text.isEmpty() && ok){
        if(a == 5){
            QMessageBox::warning(this,"(҂`_´) 🔪","Gardaaaaş şaka mısın!!??");
            QList<QLineEdit*> edits = findChildren<QLineEdit*>();
            for(QLineEdit* edit:std::as_const(edits)){
                edit->setText("(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪(☞ﾟ∀ﾟ)☞🔪");
            }
            edits.clear();
            a=0;
        } else{
            QMessageBox::warning(this,"Not added solution","There is no entered input");
            a++;
            MainWindow::onNewFileClicked();
        }
    }
}


void MainWindow::onSetVisualStdClicked()
{
    QString filePath = QFileDialog::getOpenFileName(this,"Choose a file");
    if(!filePath.isEmpty())ui->lineEdit_3->setText(filePath);
}

void MainWindow::onDeleteAllClicked(){
    int a = ui->solutionContainer->count();
    for(int i = 0;i < a;++i){
        QListWidgetItem *it = ui->solutionContainer->item(0);
        solutionItemWidget* w = solutionList.at(0);
        ui->solutionContainer->removeItemWidget(it);
        solutionList.removeOne(w);
        delete it;
        w->deleteLater();
    }
}


void MainWindow::setupDynamicOrder(){
    connect(ui->solutionContainer->model(), &QAbstractItemModel::rowsMoved,
            this, [=]() {
        solutionList.clear();
                for (int i = 0; i < ui->solutionContainer->count(); ++i) {
                    auto *item = ui->solutionContainer->item(i);
                    auto *widget = qobject_cast<solutionItemWidget *>(ui->solutionContainer->itemWidget(item));
                    if (widget) {
                        solutionList.append(widget);
                        qDebug() << i << ": " << solutionList[i]->getTitle();
                    }
                }
            });
}

void MainWindow::buildAllSelectedSolution(){
    buildQueue.clear();
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(true);
    for(solutionItemWidget *s: std::as_const(solutionList)){
        if(!s->IsSelected())continue;
        QString nameOfSolution = s->getTitle();
        QString slnPath = s->getPath();
        QString platform = s->getSelectedPlatform();
        QStringList configs;
        if(s->isDebugSelected()) configs<<"Debug";
        if(s->isReleaseSelected()) configs <<"Release";
        bool cleanForRelease = s->isCleanForReleaseSelected();
        bool cleanForDebug = s->isCleanForDebugSelected();

        for(const QString &config:std::as_const(configs)){
            if(config == "Debug"){
                buildQueue.enqueue({slnPath,config,platform,cleanForDebug,nameOfSolution});
            } else if(config == "Release"){
                buildQueue.enqueue({slnPath,config,platform,cleanForRelease,nameOfSolution});
            }
        s->getDeleteButton()->setEnabled(true);
        s->getEditButton()->setEnabled(true);
        s->getLayoutForCheckboxes()->setEnabled(true);
        s->getLayoutForFileChoose()->setEnabled(true);
    }
    }
    if(intervalSelected){
        setupIntervalBuild(intervalTimeMinutes,intervalTimeHour);
    } else if(scheduledSelected){
        setupScheduledBuild(scheduledTime);
    }
    if(buildQueue.isEmpty()){
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(false);
        return;
    } else if(getMsBuildPath().isEmpty()){
        if(logTab)
        logTab->setLogText("Pls enter msbuild path");
        logTextEdit->setText("Pls enter msbuild path");
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(false);
        return;
    }
    runNextBuild(&buildQueue);
}

void MainWindow::runNextBuild(QQueue<BuildTask> *queue){
    if(queue->isEmpty()){
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(false);
        if(mailInfo->getSavedSitutation() && !errorMessages.isEmpty()){
        QString *body = new QString();
        setBodyErrorMessage(errorMessages,body);
        errorMessages.clear();
        mailInfo->setBody(*body);
        mailSender = new MailSender(this,mailInfo);
        connect(mailSender,&MailSender::windowClosed,this,&MainWindow::mailSenderWindowCLosed);
        mailSender->show();
        //sendMail(mailInfo->getSenderMail(),mailInfo->getRecieverMail(),"Solution Problems Logs",mailInfo->getBody(),mailInfo->getSenderMailPassword());
        body = nullptr;
        }
        if(closeAfter)QCoreApplication::quit();
        return;
    }
    task = queue->dequeue();
    QStringList arguments;
    arguments<<task.slnPath <<QString("/p:Configuration=%1").arg(task.config)<<QString("/p:Platform=%1").arg(task.platform);
    if (task.isClean)
        arguments << "/t:Clean;Build";
    else
        arguments << "/t:Build";
    if(logTab)
    logTab->addTextToLogTex(QString("%1 - %2 %3 işlemi başlıyor").arg(task.config,task.platform,task.isClean ? "Clean": "Build"));
    logTextEdit->append(QString("%1 - %2 %3 işlemi başlıyor").arg(task.config,task.platform,task.isClean ? "Clean": "Build"));
    process = new QProcess(this);
    process->setProcessChannelMode(QProcess::MergedChannels);
    connect(process, &QProcess::readyReadStandardOutput, this, &MainWindow::readyReadStandardOutput);
    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), this,&MainWindow::processExitStatus);
    process->start(getMsBuildPath(),arguments);

}
void MainWindow::on_pushButton_2_clicked()
{
    for(solutionItemWidget *s: std::as_const(solutionList)){
        if(s->IsSelected()){
            s->getDeleteButton()->setEnabled(false);
            s->getEditButton()->setEnabled(false);
            s->getLayoutForCheckboxes()->setEnabled(false);
            s->getLayoutForFileChoose()->setEnabled(false);
        }
    }
    buildAllSelectedSolution();
}

QString MainWindow::getMsBuildPath(){
    return ui->lineEdit_3->text();
}

void MainWindow::on_pushButton_3_clicked()
{
    if(process && process->state() ==QProcess::Running){
        process->kill();
        if(logTab)
        logTab->addTextToLogTex("Build işlemi iptal edildi");
        logTextEdit->append("Build işlemi iptal edildi");
        buildQueue.clear();
    }
}
void MainWindow::setupScheduledBuild(QTime time){
    if(scheduledTimer) scheduledTimer->stop();
    scheduledTimer = new QTimer(this);
    connect(scheduledTimer,&QTimer::timeout,this,[=]{
        if(QTime::currentTime().hour()==time.hour()&&QTime::currentTime().minute()==time.minute()){
            ui->pushButton_2->click();
            scheduledTimer->stop();
        }
    });
    scheduledTimer->start(1000);
}
void MainWindow::setupIntervalBuild(int intervalMinute,int intervalHour){
    if(intervalTimer) intervalTimer->stop();
    intervalTimer = new QTimer(this);
    connect(intervalTimer,&QTimer::timeout,this,[=]{
        ui->pushButton_2->click();
    });
    intervalTimer->start((intervalHour*360+intervalMinute*60)*1000);
}
void MainWindow::saveSolutionsToFile(const QString &filename){
    QJsonArray solutionArray;
    for(solutionItemWidget *s : std::as_const(solutionList)){
        QJsonObject obj;
        obj["path"] = s->getPath();
        obj["debug"] = s->isDebugSelected();
        obj["release"] = s->isReleaseSelected();
        obj["clean"] = s->isCleanSelected();
        obj["cleanForRealse"] = s->isCleanForReleaseSelected();
        obj["cleanForDebug"] = s->isCleanForDebugSelected();
        obj["selected"] = s->IsSelected();
        obj["title"] = s->getTitle();
        obj["platform"] = s->getSelectedPlatform();
        solutionArray.append(obj);
    }
    QJsonObject obj;
    obj["msbuild"] = getMsBuildPath();
    obj["isScheduled"] = scheduledSelected;
    obj["isInterval"] = intervalSelected;
    obj["timeSetup"] = timeSetUp;
    obj["intervalTimeHour"] = intervalTimeHour;
    obj["intervalTimeMinute"] = intervalTimeMinutes;
    scheduledHour = scheduledTime.hour();
    scheduledMinute = scheduledTime.minute();
    scheduledSecond = scheduledTime.second();
    obj["scheduledHour"] = scheduledHour;
    obj["scheduledMinute"] = scheduledMinute;
    obj["scheduledSecond"] = scheduledSecond;
    obj["recieverMail"] = mailInfo->getRecieverMail();
    obj["senderMail"] = mailInfo->getSenderMail();
    obj["senderMailPassword"] = mailInfo->getSenderMailPassword();
    obj["savedSitutation"] = mailInfo->getSavedSitutation();
    solutionArray.append(obj);
    QJsonDocument doc(solutionArray);
    QFile file(filename);
    if(file.open(QIODevice::WriteOnly)){
        file.write(doc.toJson());
        file.close();
    }
}
void MainWindow::loadSOlutionsFromFile(const QString &filename){
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))return;

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    QJsonArray array = doc.array();
    for(const QJsonValue &value:std::as_const(array)){
        QJsonObject obj = value.toObject();
        if(array.last().toObject() == obj)continue;
        auto *widget = new solutionItemWidget();
        widget->setCleaned(obj["clean"].toBool());
        widget->setDebug(obj["debug"].toBool());
        widget->setCleanForDebug(obj["cleanForDebug"].toBool());
        widget->setCleanForRelease(obj["cleanForRealse"].toBool());
        widget->setSelected(obj["selected"].toBool());
        widget->setPath(obj["path"].toString());
        widget->setTitle(obj["title"].toString());
        widget->setReleased(obj["release"].toBool());
        widget->setPlatform(obj["platform"].toString());
        solutionList.append(widget);
    }
    setMsnbuildPath(array.last()["msbuild"].toString());
    scheduledSelected = array.last()["isScheduled"].toBool();
    intervalSelected = array.last()["isInterval"].toBool();
    timeSetUp = array.last()["timeSetup"].toBool();
    intervalTimeHour = array.last()["intervalTimeHour"].toInt();
    intervalTimeMinutes = array.last()["intervalTimeMinute"].toInt();
    scheduledHour = array.last()["scheduledHour"].toInt();
    scheduledMinute = array.last()["scheduledMinute"].toInt();
    scheduledSecond= array.last()["scheduledSecond"].toInt();
    mailInfo->setRecieverMail(array.last()["recieverMail"].toString());
    mailInfo->setSenderMail(array.last()["senderMail"].toString());
    mailInfo->setSenderMailPassword(array.last()["senderMailPassword"].toString());
    mailInfo->setSavedSitutation(array.last()["savedSitutation"].toBool());
    scheduledTime.setHMS(scheduledHour,scheduledMinute,scheduledSecond);
}

void MainWindow::openingInitiations(){
    for(solutionItemWidget *s : std::as_const(solutionList)){
        auto *solution1 = s;
        auto *item = new QListWidgetItem(ui->solutionContainer);
        item->setSizeHint(solution1->sizeHint());
        ui->solutionContainer->addItem(item);
        ui->solutionContainer->setItemWidget(item,solution1);
        connect(solution1,&solutionItemWidget::requestDelete,this,[=](solutionItemWidget *w){
            for(int i = 0;i < ui->solutionContainer->count();++i){
                QListWidgetItem *it = ui->solutionContainer->item(i);
                if(ui->solutionContainer->itemWidget(it)==w){
                    ui->solutionContainer->removeItemWidget(it);
                    solutionList.removeOne(w);
                    delete it;
                    w->deleteLater();
                    break;
                }
            }
        });
    }
}
void MainWindow::setMsnbuildPath(QString path1){
    ui->lineEdit_3->setText(path1);
}



void MainWindow::onOpenLogTextStateChanged(Qt::CheckState t)
{
    if(t == Qt::CheckState::Checked){
        logTab = new logScreen();
        logTab ->setWindowModality(Qt::NonModal);
        logTab->setLogText(logText);
        logTab ->show();
    }
    else if(t==Qt::CheckState::Unchecked){
        logText = logTab->getText();
        logTab->deleteLater();
        logTab = nullptr;
    }

}
void MainWindow::setSOlutionContainer(){
    ui->solutionContainer->setSpacing(5);
    ui->solutionContainer->setResizeMode(QListView::Adjust);
    ui->solutionContainer->setDragEnabled(true);
    ui->solutionContainer->setAcceptDrops(true);
    ui->solutionContainer->setDropIndicatorShown(true);
    ui->solutionContainer->setDragDropMode(QAbstractItemView::InternalMove);
}
void MainWindow::setMenuBarButtons(){
    connect(ui->actionNew_File, &QAction::triggered,this,&MainWindow::onNewFileClicked);
    connect(ui->actionDelete_All_File,&QAction::triggered,this,&MainWindow::onDeleteAllClicked);
}

void MainWindow::onSetTimerClicked()
{
    timer = new EditWindow();
    ui->SetTimer->setEnabled(false);
    timer->show();
    if(intervalSelected){
        timer->getIntercalCheckBox()->setCheckState(Qt::Checked);
        timer->getHourSpin()->setValue(intervalTimeHour);
        timer->getMinuteSpin()->setValue(intervalTimeMinutes);
    } else if (scheduledSelected){
        timer->getScheduleCheckBox()->setCheckState(Qt::Checked);
        timer->getTimeEdit()->setTime(scheduledTime);
    }
    connect(timer->getCancelButton(),&QPushButton::clicked,this,[=]{
        if(timeSetUp){
        intervalSelected = false;
        scheduledSelected = false;
        timeSetUp = false;
        timer->getIntercalCheckBox()->setCheckState(Qt::Unchecked);
        timer->getScheduleCheckBox()->setCheckState(Qt::Unchecked);
        timer->getHourSpin()->setValue(0);
        timer->getMinuteSpin()->setValue(0);
        timer->getTimeEdit()->setTime(QTime::currentTime());
        timer->getInfoTextLabel()->setText("Timer Setup is removed");
        }

    });
    connect(timer->getSetUpButton(),&QPushButton::clicked,this,[=]{
        if(timer->getIntercalCheckBox()->isChecked() || timer->getScheduleCheckBox()->isChecked()){
            if(timer->isIntervalSelected()){
                if(timer->getHourSpin()->value()==0 && timer->getMinuteSpin()==0){
                    timer->getInfoTextLabel()->setText("Pls enter a valid input");
                } else {
                    intervalSelected = true;
                    scheduledSelected= false;
                    intervalTimeHour = timer->getHourSpin()->value();
                    intervalTimeMinutes = timer->getMinuteSpin()->value();
                }
            } else{
                scheduledSelected = true;
                intervalSelected = false;
                scheduledTime = timer->getTimeEdit()->time();
                scheduledHour= timer->getScheduledTime().hour();;
                scheduledMinute=timer->getScheduledTime().minute();
                scheduledSecond = timer->getScheduledTime().second();
            }
            timer->getInfoTextLabel()->setText("Timer is set up");
            timeSetUp = true;
        } else {
            timer->getInfoTextLabel()->setText("There is no selected choose");
        }
    });
    connect(timer,&EditWindow::windowClosed,this,[=]{
        ui->SetTimer->setEnabled(true);
        timer->deleteLater();
        timer = nullptr;
    });
}
void MainWindow::closeAfterCheckBoxChanged(Qt::CheckState s){
    if(s == Qt::CheckState::Checked){
        closeAfter = true;
    } else if (s == Qt::CheckState::Unchecked) {
        closeAfter = false;
    }
}

void MainWindow::setMailClicked(){
    mailSetter = new mailSetup(this,mailInfo->getSenderMail(),mailInfo->getSenderMailPassword(),mailInfo->getRecieverMail());
    mailSetter->show();
    connect(mailSetter->getSaveButton(),&QPushButton::clicked,this,[=]{
        if(!mailSetter->getRecieverMail().isEmpty() &&!mailSetter->getSenderMail().isEmpty()&&!mailSetter->getSenderPassword().isEmpty()){
            mailInfo->setRecieverMail(mailSetter->getRecieverMail());
            mailInfo->setSenderMail(mailSetter->getSenderMail());
            mailInfo->setSenderMailPassword(mailSetter->getSenderPassword());
            mailInfo->setSavedSitutation(true);
            mailSetter->setLogLabel("Mail informations are set up");
        } else {
            mailSetter->setLogLabel("PLease, fill the blanks");
        }

    });
    connect(mailSetter->getCancelButton(),&QPushButton::clicked,this,[=]{
        mailInfo->setRecieverMail("");
        mailInfo->setSenderMail("");
        mailInfo->setSenderMailPassword("");
        mailInfo->setSavedSitutation(false);
        mailSetter->setSenderMailText(mailInfo->getSenderMail());
        mailSetter->setSenderPasswordText(mailInfo->getSenderMailPassword());
        mailSetter->setRecieverMailText(mailInfo->getRecieverMail());
        mailSetter->setLogLabel("Mail informations are removed");
    });
    connect(mailSetter,&mailSetup::windowClosed,this,[=]{
        mailSetter=nullptr;
    });
}


void MainWindow::setBodyErrorMessage(QQueue<Solution> errorMessages,QString *body){
    Solution messagePart = errorMessages.dequeue();
    *body += QString("<b>Solution name:</b> %1, <b>Solution Path:</b> %2, <b>Solution Error:</b> %4 %3 <br><br>").arg(messagePart.name,messagePart.path,messagePart.isError ? "<span style='color:red'><b>Failure</b></span>":"<span style='color:green'><b>Succesed</b></span>",messagePart.errorMessage);
    if(errorMessages.isEmpty())return;
    setBodyErrorMessage(errorMessages,body);
}
void MainWindow::tabButtonConfiguration(){
    QMenuBar* menuBar = this->menuBar();
    QAction* buildNowAction = new QAction("Log Text", this);
    menuBar->addAction(buildNowAction);
    connect(buildNowAction, &QAction::triggered, this, &MainWindow::menuLogScreenChecked);
}
void MainWindow::menuLogScreenChecked(){
    if(isLogVisible){
        ui->frame->setVisible(false);
        ui->widget_3->setVisible(false);
        ui->widget_4->setVisible(false);
        ui->solutionContainer->setVisible(false);
        logTextEdit->setVisible(true);
        logLabel->setVisible(true);
        logClearButton->setVisible(true);
        isLogVisible = false;
    } else{
        ui->frame->setVisible(true);
        ui->widget_3->setVisible(true);
        ui->widget_4->setVisible(true);
        ui->solutionContainer->setVisible(true);
        logTextEdit->setVisible(false);
        logLabel->setVisible(false);
        logClearButton->setVisible(false);
        isLogVisible = true;
    }
    /*
    while ((item = ui->widget->takeAt(0)) != nullptr) {
        if (QWidget* w = item->widget())
            w->hide(); // or delete w;
        delete item;
    }*/
    //ui->widget->setCurrent
}
void MainWindow::setLogScreen(){
    logTextEdit = ui->logTextEdit;
    logLabel = ui->logLabel;
    logClearButton = ui->logClearButton;
    logTextEdit->setVisible(false);
    logLabel->setVisible(false);
    logClearButton->setVisible(false);
    connect(logClearButton,&QPushButton::clicked,this,&MainWindow::clearButtonClicked);
}
void MainWindow::clearButtonClicked(bool t){
    logTextEdit->setText("");
}
void MainWindow::processExitStatus(int exitCode, QProcess::ExitStatus exitStatus){
    process->deleteLater();
    process = nullptr;
    logTextEdit->append(QString::number(exitCode) + "\n");
    logTextEdit->append(QString("%1 - %2 %3 işlemi %4. \n")
                            .arg(task.config, task.platform, task.isClean ? "Clean" : "Build",
                                 exitCode == 0 ? "başarılı" : "başarısız"));

    if (exitStatus != QProcess::NormalExit || exitCode != 0)
        errorMessages.enqueue({task.name, task.slnPath, true,errorMessage1});
    runNextBuild(&buildQueue);
}

void MainWindow::readyReadStandardOutput(){
    QString output = QString::fromUtf8(process->readAllStandardOutput());
    logTextEdit->append(output);
    if(logTab)logTab->addTextToLogTex(output);
    if(output.contains(": error"))errorMessage1 = output;
}
void MainWindow::mailSenderWindowCLosed(){
    mailSender->deleteLater();
    mailSender=nullptr;
}
void MainWindow::buildAllForTimer(QQueue<BuildTask> *queue){
    runNextBuild(queue);
}
