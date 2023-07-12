#include "Page_Expenses.h"
#include "./ui_Page_Expenses.h"

PageExpenses::PageExpenses(std::shared_ptr<FinancialManager> finMan, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PageExpenses)
    , financialManager(finMan)
{
    ui->setupUi(this);


    ui->lineEdit_amount->setValidator( new QIntValidator(0, 9999999, this) );

    connect(ui->btn_addTransaction, &QPushButton::released, this, &PageExpenses::addTransaction);
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
