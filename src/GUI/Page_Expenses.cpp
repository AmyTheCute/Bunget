#include "Page_Expenses.h"
#include "./ui_Page_Expenses.h"

PageExpenses::PageExpenses(FinancialManager* finMan, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PageExpenses)
    , financialManager(finMan)
{
    ui->setupUi(this);

    int numTransactions = financialManager->numTransactions();
    model = new QStandardItemModel(numTransactions, 4);
    
    for (int row = 0; row < model->rowCount(); row++) {
        QStandardItem *item = new QStandardItem(QString::fromStdString(financialManager->transactions.at(row).description));
        model->setItem(row, 0, item);
    }
    
    ui->expenseView->horizontalHeader()->setStretchLastSection(true);
    ui->expenseView->resizeRowsToContents();
    ui->expenseView->setModel(model);
    QStringList categories;
    for(const auto& cat : financialManager->categoryNames) {
        categories << QString::fromStdString(cat);
    }
    ui->options_category->addItems(categories);


    ui->lineEdit_amount->setValidator( new QIntValidator(0, 9999999, this) );

    connect(ui->btn_addTransaction, &QPushButton::released, this, &PageExpenses::addTransaction);
}

PageExpenses::~PageExpenses()
{
    delete ui;
}

void PageExpenses::addTransaction()
{
    financialManager->addCategory("Mouse");
    // std::string desc = ui->lineEdit_desc->displayText().toStdString();
    // int amount = ui->lineEdit_amount->text().toInt();
    
    // Transaction transa(amount, desc);
    // financialManager->addTransaction(transa, "cat");
}
