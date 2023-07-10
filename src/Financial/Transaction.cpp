#include "Transaction.h"

/// @brief Constructor automatically adds transaction to category
/// @param amnt
/// @param desc
/// @param category
Transaction::Transaction(int amnt, std::string desc) : amount(amnt), description(desc)
{
}

Transaction::~Transaction()
{
}