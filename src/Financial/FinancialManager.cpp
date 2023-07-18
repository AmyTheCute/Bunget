#include "FinancialManager.h"

FinancialManager::FinancialManager()
{

}

FinancialManager::~FinancialManager()
{

}


void FinancialManager::addTransaction(const Transaction &transaction, string category)
{
    // Add transaction to stack.
    if(transactions.contains(category)) {
        transactions[category].push_back(transaction);
    } else {
        // TODO Error Handling
        std::cout << "Error, category (" << category << ") does not exist, not adding transaction\n";
    }
}

// Add category(String)
void FinancialManager::addCategory(string category)
{
    transactions[category];
    categoryNames.push_back(category);
}

size_t FinancialManager::numTransactions()
{
    return transactions.size();
}


vector<Transaction>* FinancialManager::getCategory(string category)
{
    //TODO Check if category exists
    if (transactions.contains(category)) {
        return &transactions[category];
    } else {
        // TODO Add proper error handling
        return nullptr; 
    }
}

// vector<Transaction *> FinancialManager::getCategory(string category, string month)
// {
//     return vector<Transaction *>();
// }
