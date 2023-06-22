#include "TransactionCollection.h"

TransactionCollection::TransactionCollection()
{

}

TransactionCollection::~TransactionCollection()
{

}

void TransactionCollection::addTransaction(Transaction transaction)
{
    // Add transaction to stack.
    transactions.push_back(transaction);

    // Create a refrence in the set Category for faster access 
    transaction.category->addTransaction(transaction);
}
