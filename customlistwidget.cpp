#include "customlistwidget.h"

CustomListWidget::CustomListWidget(QWidget *parent)
    : QListWidget{parent}
{

    setDragEnabled(true);
    setAcceptDrops(true);
    setDropIndicatorShown(true);
    setDragDropMode(QAbstractItemView::InternalMove);
    setSelectionMode(QAbstractItemView::SingleSelection);
}
void CustomListWidget::dropEvent(QDropEvent *event)
{
    // Perform the default drop behavior (reorders the items visually)
    QListWidget::dropEvent(event);

    // Emit signal to notify external code that the order changed
    emit itemOrderChanged();
}
