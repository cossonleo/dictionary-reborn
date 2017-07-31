#include "main_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWidget = new QWidget();
    layout = new QHBoxLayout();

    mainWidget->setLayout(layout);

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{

}
