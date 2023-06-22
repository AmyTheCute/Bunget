#include "Transaction.h"

Transaction::Transaction(int amnt, std::string desc, ExpenseCategory &category) : amount(amnt), description(desc), category(&category)
{
}

Transaction::~Transaction()
{

}