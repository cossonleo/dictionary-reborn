#include "main_window.h"
#include <DApplication>
#include <QDesktopWidget>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);

    MainWindow w;
    w.setFixedSize(550, 450);
    w.move((QApplication::desktop()->width() - w.width()) / 2,
           (QApplication::desktop()->height() - w.height()) / 2);
    w.show();

    return a.exec();
}
