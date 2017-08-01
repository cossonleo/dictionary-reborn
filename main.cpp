#include "main_window.h"
#include <QApplication>
#include <QDesktopWidget>
#include "utils.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setFixedSize(600, 400);
    w.move((QApplication::desktop()->width() - w.width()) / 2,
           (QApplication::desktop()->height() - w.height()) / 2);
    w.show();

    qApp->setStyleSheet(Utils::getQssFileContent(":/resources/style.qss"));

    return a.exec();
}
