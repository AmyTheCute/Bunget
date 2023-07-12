#ifndef TRANSACTIONITEMMODEL_H
#define TRANSACTIONITEMMODEL_H

#include <QStandardItemModel>
#include <memory>
#include "../Financial/FinancialManager.h"

class TransactionItemModel : public QStandardItemModel
{
private:
    /* data */
public:
    // DOES NOT set category by default.
    TransactionItemModel(std::weak_ptr<FinancialManager> financialManager);
    ~TransactionItemModel();
    void setCategory(std::string category);
    void setMonth(std::string month);

    // Updates the model data from the set category/month
    void update();

    private:
        //.at(0) is always month
        std::vector<string> categories;
};


#endif