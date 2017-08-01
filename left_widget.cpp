#include "left_widget.h"
#include <QPainter>
#include <QMouseEvent>

LeftWidget::LeftWidget(QWidget *parent)
    : QWidget(parent)
{ 
    currentIndex = 0;

    tabNames.insert(0, "首页");
    tabNames.insert(1, "词典");
    tabNames.insert(2, "翻译");

    setFixedWidth(100);
}

void LeftWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    int tabY = 0;
    for (int i=0; i<tabNames.length(); ++i) {
        QString tabName = tabNames.at(i);
        int width = 100;
        int height = 30;

        if (i == currentIndex) {
            QPainterPath tabLeftLinePath;
            tabLeftLinePath.addRect(QRectF(0, tabY, width, height));
            painter.fillPath(tabLeftLinePath, QColor("#2CA7F8"));

            painter.setPen(QPen(QColor("#FFFFFF")));
        }else
            painter.setPen(QPen(QColor("#000000")));

        //QRect(int left, int top, int width, int height);
        painter.drawText(QRect(30, tabY + 4, width, height), Qt::AlignTop, tabName);

        tabY += height;
    }
}

void LeftWidget::mousePressEvent(QMouseEvent *event)
{
    int prevIndex = currentIndex;

    if (event->y() < 30)
        currentIndex = 0;
    else if (event->y() < 60)
        currentIndex = 1;
    else if (event->y() < 90)
        currentIndex = 2;

    if (prevIndex != currentIndex) {
        repaint();
    }
}
