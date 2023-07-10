#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    FinancialManager financialManager;
    financialManager.addCategory("bunny");
    financialManager.addCategory("cat");
    Transaction trans(100, "bunnyJuice");
    Transaction cat(100, "catJuice");
    financialManager.addTransaction(trans, "bunny");
    financialManager.addTransaction(cat, "cat");


    PageHome* homepage = new PageHome(ui->mainframe_tab);
    PageExpenses* expensepage = new PageExpenses(&financialManager, ui->mainframe_tab);

    ui->mainframe_tab->addTab(homepage, "Home");
    ui->mainframe_tab->addTab(expensepage, "Expenses");
}

MainWindow::~MainWindow()
{
    delete ui;
}

