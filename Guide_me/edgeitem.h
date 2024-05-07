#ifndef EDGEITEM_H
#define EDGEITEM_H
#include "nodeitem.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>


class EdgeItem: public QGraphicsItem {

public:
    EdgeItem(NodeItem *sourceNode, NodeItem *destNode);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr)override;
private:
    NodeItem *source;
    NodeItem *dest;
};

#endif // EDGEITEM_H



