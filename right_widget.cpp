#include "right_widget.h"
#include <QPainter>

RightWidget::RightWidget(QWidget *parent)
    : QWidget(parent)
{

}

void RightWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    painter.setPen(QPen(QColor("#FFFFFF")));
    painter.setBrush(QColor("#FFFFFF"));
    painter.drawRect(rect());
}
