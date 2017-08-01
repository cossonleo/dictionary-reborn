#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QStackedLayout>
#include <QLineEdit>
#include <QPushButton>

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
};

#endif // HOMEPAGE_H
