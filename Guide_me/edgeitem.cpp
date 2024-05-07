#include "edgeitem.h"
#include "nodeitem.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>

EdgeItem::EdgeItem(NodeItem *sourceNode, NodeItem *destNode) {
 source= sourceNode;
 dest=destNode;
}


QRectF EdgeItem:: boundingRect() const{
    qreal penWidth = 1;
    return QRectF(source->pos(), QSizeF(dest->pos().x() - source->pos().x(),
                                        dest->pos().y() - source->pos().y()))
        .normalized()
        .adjusted(-penWidth, -penWidth, penWidth, penWidth);
}
void EdgeItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget ) {
    QLineF line(source->pos(), dest->pos());
    painter->setPen(Qt::black); // Edge color
    painter->drawLine(line); // Draw a line between the source and destination nodes
}
