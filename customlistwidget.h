#ifndef CUSTOMLISTWIDGET_H
#define CUSTOMLISTWIDGET_H

#include <QWidget>
#include <QListWidget>

class CustomListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit CustomListWidget(QWidget *parent = nullptr);

signals:
    void itemOrderChanged();
protected:
    void dropEvent(QDropEvent *event);



};

#endif // CUSTOMLISTWIDGET_H
