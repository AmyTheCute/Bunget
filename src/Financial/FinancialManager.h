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

// Stores and manages transaction data and categories.
class FinancialManager
{
public:
    FinancialManager();
    ~FinancialManager();

    // Add Transaction, use std::move()?
    void addTransaction(const Transaction &transaction, string category);
    void addCategory(string category);

    // returns the number of transactions currently stored in the RAM
    size_t numTransactions();

    // Returns a vector of strings of categories.
    vector<string> getCategories() { return categoryNames; }

    bool categoryExists(string name);

    // Returns transaction pointer vector of all transactions in the categor
    vector<Transaction>* getCategory(string category);
    vector<Transaction>* getCategory(string category, string month);
    

private:
    // Vector of actual transaction objects
    map<string, vector<Transaction>> transactions;
    vector<string> categoryNames;


    
};

#endif