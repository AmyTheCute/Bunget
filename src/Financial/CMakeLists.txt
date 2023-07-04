project(Financial)

set (CMAKE_CXX_STANDARD 20)

add_library(Financial STATIC Transaction.h Transaction.cpp 
                            TransactionCollection.h TransactionCollection.cpp
                            ExpenseCategory.h ExpenseCategory.cpp)