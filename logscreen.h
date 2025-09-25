#ifndef LOGSCREEN_H
#define LOGSCREEN_H

#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>

namespace Ui {
class logScreen;
}

class logScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit logScreen(QWidget *parent = nullptr);
    ~logScreen();
public slots:
    void setLogText(QString s);
    void addTextToLogTex(QString s);
    QString getText();

private:
    QTextEdit *logTextEdit;
    QPushButton *clearButton;
    Ui::logScreen *ui;
private slots:

    void initializeLS();
    void connectionOfCLearButton();
    void clearLogTextClicked();
};

#endif // LOGSCREEN_H
