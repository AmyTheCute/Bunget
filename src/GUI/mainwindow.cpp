#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::shared_ptr<FinancialManager> financialManager = std::make_shared<FinancialManager>();
    financialManager->addCategory("bunny");
    financialManager->addCategory("cat");
    financialManager->addCategory("deer");
    Transaction trans(100, "bunnyJuice");
    Transaction cat(100, "catJuice");
    financialManager->addTransaction(trans, "bunny");
    financialManager->addTransaction(cat, "cat");


    PageHome* homepage = new PageHome(ui->mainframe_tab);
    PageExpenses* expensepage = new PageExpenses(financialManager, ui->mainframe_tab);

    ui->mainframe_tab->addTab(homepage, "Home");
    ui->mainframe_tab->addTab(expensepage, "Expenses");
    financialManager->addCategory("bunny");
}

MainWindow::~MainWindow()
{
    delete ui;
}

