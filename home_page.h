#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QStackedLayout>
#include <QLineEdit>
#include <QPushButton>
#include "everyday_page.h"
#include "dict_page.h"

class HomePage : public QWidget
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = 0);

private:
    QVBoxLayout *layout;
    QHBoxLayout *topLayout;
    QStackedLayout *switchLayout;

    QLineEdit *queryEditor;
    QPushButton *queryButton;

    EverydayPage *everydayPage;
    DictPage *dictPage;

private slots:
    void editTextChanged();
};

#endif // HOMEPAGE_H
