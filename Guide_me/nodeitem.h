#ifndef NODEITEM_H
#define NODEITEM_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>


class NodeItem : public QGraphicsItem {
private:
    QString text;

public:
    NodeItem(QString text);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
};

#endif // NODEITEM_H

