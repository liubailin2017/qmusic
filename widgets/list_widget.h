#ifndef LIST_WIDGET_H
#define LIST_WIDGET_H

#include <QWidget>
#include <QListView>

class QStringListModel;

class ListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ListWidget(QWidget *parent = nullptr);

    void addMusic(const QString &name, const QString &artist);

private:
    QStringListModel *model;
    QListView *listView;
};

#endif // LIST_WIDGET_H
