#include <iostream>

#include "Financial/TransactionCollection.h"
#include "Financial/Transaction.h"
#include "Financial/ExpenseCategory.h"

int main(int argc, char *argv[])
{
    // Comment out private members for this test. Get/Set not coded yet.
    TransactionCollection trans_col;
    ExpenseCategory food("Food");
    ExpenseCategory gros("Groceries");

    Transaction newtrans(100, "BunnyJuice", food);
    Transaction sectrans(200, "Meh I ahasdf", gros);
    Transaction thirdtrans(100, "sushi", food);
    Transaction foruthtrans(100, "BunnyPellter", gros);

    trans_col.addTransaction(newtrans);
    trans_col.addTransaction(sectrans);
    trans_col.addTransaction(thirdtrans);
    trans_col.addTransaction(foruthtrans);

    for (const auto &transa : gros.transactions) {
        std::cout << "Transaction name: " << transa->description << "\n";
    }
}
