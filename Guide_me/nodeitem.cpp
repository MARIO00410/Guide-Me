#include "nodeitem.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>

NodeItem::NodeItem(QString text) {
    this->text=text;
}

QRectF NodeItem::boundingRect() const {
    return QRectF(-15, -15, 55, 55); // Adjust bounding rect as needed
}
void NodeItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)  {
    QPen pen(Qt::black, 4); // Adjust color and thickness as needed
    painter->setPen(pen);
    painter->drawEllipse(-15, -15, 55, 55); // Draw a circle for the node

    // Adjust text position
    pen.setColor(Qt::white);
    painter->setPen(pen);
    QFont font = painter->font(); // Get current font
    font.setPixelSize(14); // Set font size
    painter->setFont(font); // Apply the modified font

    // Calculate text position (centered within the node)
    QRectF textRect=painter->fontMetrics().boundingRect(text);
    qreal textWidth=textRect.width();
    qreal textHeight=textRect.height();
    int textX = -textWidth / 4;
    int textY = textHeight ; // Adjust vertical position as needed

    painter->drawText(textX, textY, text); // Draw text inside the node
}

