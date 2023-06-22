#include "TransactionCollection.h"

TransactionCollection::TransactionCollection()
{

}

TransactionCollection::~TransactionCollection()
{

}

void TransactionCollection::addTransaction(Transaction transaction)
{
    transactions.push_back(transaction);
    transaction.category->addTransaction(transaction);
}
