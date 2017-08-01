#include "home_page.h"

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    topLayout = new QHBoxLayout();
    switchLayout = new QStackedLayout();

    queryEditor = new QLineEdit();
    queryButton = new QPushButton("查词");

    topLayout->addWidget(queryEditor);
    topLayout->addWidget(queryButton);

    layout->addLayout(topLayout);
    layout->addLayout(switchLayout);
}
