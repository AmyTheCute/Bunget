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
    // add transaction pointer to list, Faster than scanning the entire array O(N)
    transactions.push_back(&transaction);

    // Add total to self.
    amount_current += transaction.amount;
}
