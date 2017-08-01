#include "about_page.h"
#include <QLabel>

AboutPage::AboutPage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);

    QLabel *icon = new QLabel();
    icon->setPixmap(QPixmap(":/resources/logo.svg").scaled(60, 60));

    QLabel *title = new QLabel("Rekols词典");
    title->setStyleSheet("font-size: 20px");

    QLabel *version = new QLabel("版本： V0.1");
    QLabel *tips = new QLabel("感谢有道词典提供的API");

    layout->addStretch();
    layout->addWidget(icon, 0, Qt::AlignCenter);
    layout->addSpacing(20);
    layout->addWidget(title, 0, Qt::AlignCenter);
    layout->addWidget(version, 0, Qt::AlignCenter);
    layout->addSpacing(20);
    layout->addWidget(tips, 0, Qt::AlignCenter);
    layout->addStretch();
}
