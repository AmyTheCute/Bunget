#ifndef PAGE_HOME_H
#define PAGE_HOME_H

#include <QMainWindow>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class PageHome; }
QT_END_NAMESPACE

class PageHome : public QWidget
{
    Q_OBJECT

public:
    PageHome(QWidget *parent = nullptr);
    ~PageHome();

private:
    Ui::PageHome *ui;
};
#endif // MAINWINDOW_H
