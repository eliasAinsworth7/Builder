#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QPushButton>
#include <QCheckBox>
#include <QTimeEdit>
#include <QSpinBox>
#include<QLabel>

namespace Ui {
class EditWindow;
}

class EditWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditWindow(QWidget *parent = nullptr);
    ~EditWindow();
    QCheckBox *getIntercalCheckBox()const;
    QCheckBox *getScheduleCheckBox()const;
    QSpinBox *getHourSpin()const;
    QSpinBox *getMinuteSpin()const;
    QLabel *getInfoTextLabel()const;
    QPushButton *getSetUpButton()const;
    QPushButton *getCancelButton()const;
    int getIntervalTimeMinutes()const;
    int getIntervalTimeHour()const;
    QTime getScheduledTime()const;
    bool isIntervalSelected()const;
    bool isScheduledSelected()const;

public slots:
    QTimeEdit *getTimeEdit();

private:
    QLabel *info;
    Ui::EditWindow *ui;
    QCheckBox *scheduleCheckBox;
    QCheckBox *intervalCheckBox;
    QSpinBox *hourSpin;
    QSpinBox *minuteSpin;
    QTimeEdit *timeEdit;
    int intervalTimeMinutes;
    int intervalTimeHour;
    QTime scheduledTime;

signals:
    void windowClosed();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:;
    void onIntervalCheckBoxStateChanged(Qt::CheckState q);
    void onScheduledCheckBoxStateChanged(Qt::CheckState q);
    void setupCheckBoxes();
    void setupSpinBoxes();
    void setupTimeEdit();
    void setupInfo();
    void setupIntervalsValues();
    void setupScheduledValue();
    void connectionForCheckBoxes();
};

#endif // EDITWINDOW_H
