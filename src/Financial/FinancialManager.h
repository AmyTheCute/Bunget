#ifndef FINANCIALMANAGER_H
#define FINANCIALMANAGER_H

#pragma once

#include "Transaction.h"
#include <iostream>
#include <vector>
#include <map>

class Transaction;
class ExpenseCategory;

using std::vector, std::map, std::string;

// This class is used to store all the transactions currently in RAM
class FinancialManager
{
public:
    FinancialManager();
    ~FinancialManager();

    // Add Transaction, use std::move()?
    void addTransaction(const Transaction &transaction, string category);
    void addCategory(string category);

    size_t numTransactions();

    bool categoryExists(string name);

    // Vector of actual transaction objects
    vector<Transaction> transactions;
    map<string, vector<Transaction *>> categories;
    vector<string> categoryNames;


    
};

#endif