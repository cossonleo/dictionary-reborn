#include "main_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWidget = new QWidget();
    layout = new QHBoxLayout();
    leftWidget = new LeftWidget();

    layout->addWidget(leftWidget);

    mainWidget->setLayout(layout);

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{

}
