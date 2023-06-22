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

//Commented out for debugging.
// private:
    
    int amount;
    // std::string vendor;
    std::string description;
    ExpenseCategory* category;

    struct date
    {
        unsigned short int year;
        unsigned short int month;
        unsigned short int day;
    };
    
};

#endif