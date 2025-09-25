#ifndef SOLUTIONITEMWIDGET_H
#define SOLUTIONITEMWIDGET_H

#include "editwindow.h"
#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QFileDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QInputDialog>

class solutionItemWidget : public QWidget
{
    Q_OBJECT
public:
    explicit solutionItemWidget(QString title = "",QWidget *parent = nullptr);
    QString getTitle() const;
    QString getPath() const;


public slots:
    int getIntervalTimeMinutes();
    int getIntervalTimeHour();
    QTime *getScheduledTime();
    bool getIntervalState();
    bool getScheduledState();
    bool timeSetUp();
    bool IsSelected();
    bool isDebugSelected();
    bool isCleanSelected();
    bool isCleanForDebugSelected();
    bool isCleanForReleaseSelected();
    bool isReleaseSelected();
    QString getSelectedPlatform();
    void platformComboboxInitiate();
    QPushButton* getDeleteButton();
    QHBoxLayout *getLayoutForCheckboxes();
    QHBoxLayout *getLayoutForFileChoose();
    QPushButton *getEditButton();
    void setTitle(QString title1);
    void setPath(QString path1);
    void setSelected(bool selected);
    void setDebug(bool debuged);
    void setCleaned(bool cleaned);
    void setCleanForDebug(bool cleanForDebug);
    void setCleanForRelease(bool cleanForRelease);
    void setReleased(bool released);
    void setPlatform(QString platfrom);
private:
    bool scheduledSelected;
    bool intervalSelected;
    bool isTimeSetUp;
    bool selected;
    bool debug;
    bool cleanForDebug;
    bool cleanForRelease;
    bool cleaned;
    bool released;
    QString platform;
    int intervalTimeMinutes;
    int intervalTimeHour;
    QTime scheduledTime;
    QString title;
    QString path;
    QLabel *titleLabel = nullptr;
    QPushButton *editButton = nullptr;
    QPushButton *deleteButton = nullptr;
    QPushButton *chooseButton = nullptr;
    QVBoxLayout *debugAndCleanLayout = nullptr;
    QVBoxLayout *releaseAndCleanLayout = nullptr;
    QCheckBox *isSelected = nullptr;
    QCheckBox *debugCheckBox = nullptr;
    QCheckBox *cleanCheckBox = nullptr;
    QCheckBox *cleanForDebugCheckBox = nullptr;
    QCheckBox *cleanForReleaseCheckBox = nullptr;
    QCheckBox *releaseCheckBox = nullptr;
    QComboBox *platformCombox = nullptr;
    QLineEdit *solutionPathTextLine = nullptr;
    QHBoxLayout *layoutForCheckboxes = nullptr;
    QHBoxLayout *layoutForFileChoose = nullptr;
    QVBoxLayout *layout = nullptr;
    QHBoxLayout *headerLayout = nullptr;
    QHBoxLayout *bodyLayout = nullptr;
    EditWindow *editWindow = nullptr;

private slots:
    void connectionForButtons();
    void initiateButtons();
    void initiateCheckBoxes();
    void initiateFilePart();
    void onDeleteButtonClicked();
    void onChooseButtonClicked();
    void onEditButtonClicked();
    void connectDeleteButton();
    void connectEditButton();
    void connectChooseButton();
    void setupForTimerBools();
    void setupHeader();
    void setupSize();
    void setupLayout();
    void setTitleLabel(QString s);
    void createMainLayout();
protected:
    void resizeEvent(QResizeEvent* event) override{
        QWidget::resizeEvent(event);
        deleteButton->move(width()-deleteButton->width()-10,0);
    }
signals:
    void requestDelete(solutionItemWidget *self);
};

#endif // SOLUTIONITEMWIDGET_H
