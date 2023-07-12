#ifndef TRANSACTION_H
#define TRANSACTION_H

#pragma once
#include <iostream>

// Holds Transaction data, a transaction. (Expense/Income)
class Transaction
{
public:
    Transaction(int amnt, std::string desc);
    ~Transaction();
    int amount;
    
    // std::string vendor; commented out for debugging.
    std::string description;


private:

    struct date
    {
        unsigned short int year;
        unsigned short int month;
        unsigned short int day;
    };
    
};

#endif