#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <DMainWindow>

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAIN_WINDOW_H
