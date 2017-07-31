#include "main_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWidget = new QWidget();
    layout = new QHBoxLayout();
    leftWidget = new LeftWidget();
    rightWidget = new RightWidget();

    layout->addWidget(leftWidget);
    layout->addWidget(rightWidget);

    mainWidget->setLayout(layout);

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{

}
