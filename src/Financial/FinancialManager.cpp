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
    if(categories.contains(category)) {
        transactions.push_back(transaction);
        categories[category].push_back(&transactions.back());
    } else {
        // Error Handling
        std::cout << "Error, category (" << category << ") does not exist, not adding transaction\n";
    }
}

// Add category(String)
void FinancialManager::addCategory(string category)
{
    categories[category];
    categoryNames.push_back(category);
}

size_t FinancialManager::numTransactions()
{
    return transactions.size();
}


vector<Transaction *> FinancialManager::getCategory(string category)
{
    //TODO Check if category exists
    return categories[category];
}

// vector<Transaction *> FinancialManager::getCategory(string category, string month)
// {
//     return vector<Transaction *>();
// }
