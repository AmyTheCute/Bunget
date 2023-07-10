#ifndef PAGE_EXPENSES_H
#define PAGE_EXPENSES_H

#include <QMainWindow>
#include <iostream>
#include <QStandardItemModel>
#include "../Financial/FinancialManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PageExpenses; }
QT_END_NAMESPACE

class PageExpenses : public QWidget
{
    Q_OBJECT

public:
    PageExpenses(FinancialManager* finMan, QWidget *parent = nullptr);
    ~PageExpenses();

    void addTransaction();
    QStandardItemModel* model;

private:

    Ui::PageExpenses *ui;
    FinancialManager* financialManager;
};
#endif // MAINWINDOW_H
