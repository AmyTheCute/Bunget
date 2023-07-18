#ifndef PAGE_EXPENSES_H
#define PAGE_EXPENSES_H

#include <QMainWindow>
#include <iostream>
#include "TransactionItemModel.h"
#include "../Financial/FinancialManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PageExpenses; }
QT_END_NAMESPACE

class PageExpenses : public QWidget
{
    Q_OBJECT

public:
    PageExpenses(std::shared_ptr<FinancialManager> finMan, QWidget *parent = nullptr);
    ~PageExpenses();

    void addTransaction();
    void update();
    void updateCategories();
    void updateTableWidget();

private:
    QStandardItemModel * transactions_model;
    Ui::PageExpenses *ui;
    std::shared_ptr<FinancialManager> financialManager;
};
#endif // MAINWINDOW_H
