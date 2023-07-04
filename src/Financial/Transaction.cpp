#include "Transaction.h"

/// @brief Constructor automatically adds transaction to category
/// @param amnt
/// @param desc
/// @param category
Transaction::Transaction(int amnt, std::string desc, ExpenseCategory &category) : amount(amnt), description(desc), category(&category)
{
    // Create a refrence in the set Category for faster access
    this->category->addTransaction(*this);
}

Transaction::~Transaction()
{
}