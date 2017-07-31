#include "left_widget.h"
#include <QPainter>

LeftWidget::LeftWidget(QWidget *parent)
    : QWidget(parent)
{
    setFixedWidth(100);
}

void LeftWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    painter.setBrush(Qt::red);
    painter.drawRect(rect());
}
