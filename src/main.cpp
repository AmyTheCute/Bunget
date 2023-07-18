#include <iostream>

#include "GUI/mainwindow.h"
#include <QApplication>

#include "Financial/FinancialManager.h"
#include "Financial/Transaction.h"
#include <map>

int main(int argc, char *argv[])
{
    // // Comment out private members for this test. Get/Set not coded yet.

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
