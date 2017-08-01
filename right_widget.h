#ifndef RIGHTWIDGET_H
#define RIGHTWIDGET_H

#include <QWidget>

class RightWidget : public QWidget
{
    Q_OBJECT

public:
    RightWidget(QWidget *parent = 0);

    void paintEvent(QPaintEvent *);
};

#endif // RIGHTWIDGET_H
