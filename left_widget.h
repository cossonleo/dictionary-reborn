#ifndef LEFTWIDGET_H
#define LEFTWIDGET_H

#include <QWidget>

class LeftWidget : public QWidget
{
    Q_OBJECT

public:
    LeftWidget(QWidget *parent = 0);

    void paintEvent(QPaintEvent *);
};

#endif // LEFTWIDGET_H
