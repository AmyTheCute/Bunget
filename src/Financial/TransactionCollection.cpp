#include "TransactionCollection.h"

TransactionCollection::TransactionCollection()
{

}

TransactionCollection::~TransactionCollection()
{

}

/// @brief 
/// @param transaction 
void TransactionCollection::addTransaction(const Transaction &transaction)
{
    // Add transaction to stack.
    transactions.push_back(transaction);
}
