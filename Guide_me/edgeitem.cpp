#include "edgeitem.h"
#include "nodeitem.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsLineItem>
EdgeItem::EdgeItem(NodeItem *sourceNode, NodeItem *destNode) {
 source= sourceNode;
 dest=destNode;
}


QRectF EdgeItem:: boundingRect() const{
    qreal penWidth = 1;
    return QRectF(source->pos(), QSizeF(dest->pos().x() ,dest->pos().y()*2))
        .normalized()
        .adjusted(-penWidth, -penWidth, penWidth, penWidth);
}
void EdgeItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget ) {
    QLineF line(source->pos().x()+40,source->pos().y()+10,dest->pos().x()-15,dest->pos().y()+10);
   // QGraphicsLineItem *an=new QGraphicsLineItem(line);
    painter->setPen(Qt::white); // Edge color
    painter->drawLine(line); // Draw a line between the source and destination nodes
}
