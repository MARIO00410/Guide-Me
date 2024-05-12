#include "edgeitem.h"
#include "nodeitem.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsLineItem>
#include <QLabel>

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
    QLineF line(source->pos().x()+53,source->pos().y()+20,dest->pos().x()-17,dest->pos().y()+20);
   // QGraphicsLineItem *an=new QGraphicsLineItem(line);
    painter->setPen(Qt::white); // Edge color
    painter->drawLine(line); // Draw a line between the source and destination nodes

}
