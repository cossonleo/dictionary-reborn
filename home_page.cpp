#include "home_page.h"

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    topLayout = new QHBoxLayout();
    switchLayout = new QStackedLayout();
    queryEditor = new QLineEdit();
    queryButton = new QPushButton("查词");
    everydayPage = new EverydayPage();
    dictPage = new DictPage();

    switchLayout->addWidget(everydayPage);
    switchLayout->addWidget(dictPage);

    topLayout->addWidget(queryEditor);
    topLayout->addWidget(queryButton);

    layout->addSpacing(10);
    layout->addLayout(topLayout);
    layout->addLayout(switchLayout);

    connect(queryEditor, &QLineEdit::textChanged, this, &HomePage::editTextChanged);
}

void HomePage::editTextChanged()
{
    if (queryEditor->text().isEmpty()) {
        switchLayout->setCurrentIndex(0);

        return;
    }

    dictPage->start(queryEditor->text());
    switchLayout->setCurrentIndex(1);
}
