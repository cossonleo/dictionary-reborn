#include "right_widget.h"
#include <QPainter>

RightWidget::RightWidget(QWidget *parent)
    : QWidget(parent)
{

}

void RightWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    painter.setPen(QPen(QColor("#CECECE")));
    painter.setBrush(QColor("#CECECE"));
    painter.drawRect(rect());
}
