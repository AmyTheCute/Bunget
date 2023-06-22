#ifndef TRANSACTIONCOLLECTION_H
#define TRANSACTIONCOLLECTION_H

#pragma once

#include "Transaction.h"
#include <iostream>
#include <vector>

class Transaction;

// This class is used to store all the transactions currently in RAM
class TransactionCollection
{
public:
    TransactionCollection();
    ~TransactionCollection();

    // Add Transaction, use std::move()?
    void addTransaction(Transaction transaction);

private:

    // Vector of actual transaction objects
    std::vector<Transaction> transactions;
    
};

#endif