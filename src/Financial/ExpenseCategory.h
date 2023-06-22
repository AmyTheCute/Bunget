#ifndef EXPENSECATEGORY_H
#define EXPENSECATEGORY_H

#pragma once
#include <iostream>
#include <vector>
#include "Transaction.h"
#include "TransactionCollection.h"

class Transaction;

class ExpenseCategory
{
public:
    ExpenseCategory(const std::string &name);
    ~ExpenseCategory();

    void addTransaction(Transaction &transaction);


private:
    std::string category;
    int amount_goal = 0;
    int amount_current = 0;
    
    std::vector<Transaction *> transactions;
};

#endif