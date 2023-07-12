#include <iostream>

#include "GUI/mainwindow.h"
#include <QApplication>

#include "Financial/FinancialManager.h"
#include "Financial/Transaction.h"
#include <map>

int main(int argc, char *argv[])
{
    // // Comment out private members for this test. Get/Set not coded yet.

    FinancialManager finman;
    finman.addCategory("bunny");
    finman.addCategory("cat");
    finman.addCategory("deer");

    Transaction bunnypillow(101, "Bunny Pillow");
    Transaction catpillow(202, "Cat Pillow");
    Transaction sushiforcat(103, "sushi");
    Transaction bunnyfood(104, "Bunny pellets");
    Transaction catpell(105, "cat Pellts");
    Transaction catmilk(50, "Milk");

    finman.addTransaction(bunnypillow, "bunny");
    finman.addTransaction(bunnyfood, "bunny");

    finman.addTransaction(catpillow, "cat");
    finman.addTransaction(sushiforcat, "cat");
    finman.addTransaction(catmilk, "cat");


    auto catTrans = finman.getCategory("cat");
    auto bunTrans = finman.getCategory("bunny");

    std::cout << "cat transactions:\n";
    for(auto i : catTrans) {
        std::cout << "Desc: " << i->description << " Amount: " << i->amount << "\n";
        
    }

    std::cout << "bunny transactions:\n";
    for(auto i : bunTrans) {
        std::cout << i->description << "\n";
    }

    return 0;

    // QApplication a(argc, argv);
    // MainWindow w;
    // w.show();
    // return a.exec();
}
