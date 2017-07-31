#include "main_window.h"
#include <dtitlebar.h>

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    titlebar()->setWindowFlags(Qt::WindowTitleHint | Qt::WindowMinimizeButtonHint | Qt::WindowSystemMenuHint | Qt::WindowCloseButtonHint);
    titlebar()->setTitle("Rekols词典");
}

MainWindow::~MainWindow()
{

}
