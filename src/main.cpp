#include <iostream>

#include "GUI/mainwindow.h"
#include <QApplication>

#include "Financial/FinancialManager.h"
#include "Financial/Transaction.h"
#include <map>

int main(int argc, char *argv[])
{
    // // Comment out private members for this test. Get/Set not coded yet.
    // TransactionCollection trans_col;
    // ExpenseCategory food("Food");
    // ExpenseCategory gros("Groceries");

    // Transaction newtrans(100, "BunnyJuice", food);
    // Transaction sectrans(200, "Meh I ahasdf", gros);
    // Transaction thirdtrans(100, "sushi", food);
    // Transaction foruthtrans(100, "BunnyPellter", gros);

    // trans_col.addTransaction(newtrans);
    // trans_col.addTransaction(sectrans);
    // trans_col.addTransaction(thirdtrans);
    // trans_col.addTransaction(foruthtrans);

    // for (const auto &transa : gros.transactions) {
    //     std::cout << "Transaction name: " << transa->description << "\n";
    // }

    // std::map<std::string, std::vector<std::string>> mymap;

    // mymap["bunny"].push_back("cuteindeed");

    // if(mymap.find("cat") != mymap.end()) {
    //     std::cout << "cat exists! " << "\n";
    // } else {
    //     std::cout << "no cat " << "\n";
    // }

    // if(mymap.find("bunny") != mymap.end()) {
    //     std::cout << "bunny exists! " << "\n";
    // } else {
    //     std::cout << "no bunny " << "\n";
    // }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
