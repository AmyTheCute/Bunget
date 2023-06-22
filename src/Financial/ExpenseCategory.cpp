#include "ExpenseCategory.h"

ExpenseCategory::ExpenseCategory(const std::string &name)
{
    category = name;
}

ExpenseCategory::~ExpenseCategory()
{

}

void ExpenseCategory::addTransaction(Transaction &transaction)
{
    transactions.push_back(&transaction);
}
