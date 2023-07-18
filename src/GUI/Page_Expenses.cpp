#include "Page_Expenses.h"
#include "./ui_Page_Expenses.h"

PageExpenses::PageExpenses(std::shared_ptr<FinancialManager> finMan, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PageExpenses)
    , financialManager(finMan)
{
    ui->setupUi(this);

    // Setup Widgets
    updateCategories();

    // Setup TableWidget
}

PageExpenses::~PageExpenses()
{
    delete ui;
}

void PageExpenses::addTransaction()
{
    std::string desc = ui->lineEdit_desc->displayText().toStdString();
    int amount = ui->lineEdit_amount->text().toInt();
    
    Transaction transa(amount, desc);
    financialManager->addTransaction(transa, "cat");
}

void PageExpenses::updateCategories()
{
    QStringList categoryOptions;
    for(const auto &cat : financialManager->getCategories()) {
        categoryOptions << QString::fromStdString(cat);
    }
    ui->options_category->addItems(categoryOptions);
}
void PageExpenses::updateTableWidget()
{
    ui->transactionTable->setRowCount(financialManager->numTransactions());
    ui->transactionTable->setColumnCount(5); // TODO make DEFINE or something for the num variables

    for(auto i : financialManager.getCategory("")){
        
    }
}