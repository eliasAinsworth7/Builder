#ifndef MAINWINDOW_H
#define MAINWINDOW_H

class MailSender;  // forward declaration
#include <QToolButton>
#include "logscreen.h"
#include "solutionitemwidget.h"
#include "mailinformation.h"
#include <curl/curl.h>
#include <QFileDialog>
#include <QLabel>
#include <QMainWindow>
#include <QAction>
#include <QGroupBox>
#include <QInputDialog>
#include <QMessageBox>
#include <QTimer>
#include <QProcess>
#include <QQueue>
#include <QJsonArray>
#include <QJsonObject>
#include <QAction>
#include "mailsetup.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    struct Solution{
        QString name;
        QString path;
        bool isError;
        QString errorMessage;
    };

    struct BuildTask{
        QString slnPath;
        QString config;
        QString platform;
        bool isClean;
        QString name;
    };


private slots:
    void closeAfterCheckBoxChanged(Qt::CheckState s);
    void openingInitiations();
    void loadSOlutionsFromFile(const QString &filename);
    void saveSolutionsToFile(const QString &filename);
    void onNewFileClicked();
    void onDeleteAllClicked();
    void onSetVisualStdClicked();
    void setupDynamicOrder();
    void on_pushButton_2_clicked();
    void setupScheduledBuild(QTime time);
    void setupIntervalBuild(int intervalMinute,int intervalHour);
    void on_pushButton_3_clicked();
    void buildAllSelectedSolution();
    void runNextBuild(QQueue<BuildTask> *queue);
    void setMsnbuildPath(QString path);
    void setSOlutionContainer();
    void setMenuBarButtons();
    void processExitStatus(int exitCode, QProcess::ExitStatus exitStatus);
    void onOpenLogTextStateChanged(Qt::CheckState t);
    void onSetTimerClicked();
    void setMailClicked();
    void setBodyErrorMessage(QQueue<Solution> errorMessages,QString *body);
    void tabButtonConfiguration();
    void menuLogScreenChecked();
    void mailSenderWindowCLosed();
    QString getMsBuildPath();
    void setLogScreen();
    void clearButtonClicked(bool t);

private:
    bool isLogVisible = true;
    void buildAllForTimer(QQueue<BuildTask> *queue);
    void readyReadStandardOutput();
    BuildTask task;
    MailSender *mailSender = nullptr;
    QQueue<QString>* errorMessageList = new QQueue<QString>();
    QString errorMessage1;
    QLabel *logLabel = nullptr;
    QTextEdit *logTextEdit = nullptr;
    QPushButton *logClearButton = nullptr;
    logScreen *logTab = nullptr;
    QString logText = "";
    mailSetup * mailSetter;
    int scheduledHour;
    int scheduledMinute;
    int scheduledSecond;
    bool timeSetUp;
    bool isCloseAfter;
    QTime scheduledTime;
    bool scheduledSelected;
    bool intervalSelected;
    int intervalTimeMinutes;
    int intervalTimeHour;
    EditWindow *timer = nullptr;
    bool closeAfter;
    QQueue<Solution> errorMessages;
    QQueue<BuildTask> buildQueue;
    QTimer *intervalTimer = nullptr;
    QTimer *scheduledTimer = nullptr;
    int a;
    Ui::MainWindow *ui;
    QList<solutionItemWidget*>solutionList;
    QProcess *process = nullptr;
    mailInformation *mailInfo = new mailInformation();
};
#endif // MAINWINDOW_H
