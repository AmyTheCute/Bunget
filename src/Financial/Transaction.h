#ifndef TRANSACTION_H
#define TRANSACTION_H

#pragma once
#include <iostream>
#include "ExpenseCategory.h"

class ExpenseCategory;

// Holds Transaction data, a transaction. (Expense/Income)
class Transaction
{
public:
    Transaction(int amnt, std::string desc, ExpenseCategory &category);
    ~Transaction();
    int amount;
    
    // std::string vendor; commented out for debugging.
    std::string description;
    ExpenseCategory* category;


private:

    struct date
    {
        unsigned short int year;
        unsigned short int month;
        unsigned short int day;
    };
    
};

#endif