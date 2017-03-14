#ifndef LIST05_5_EXPENSE_H
#define LIST05_5_EXPENSE_H

#include <iostream>
#include <string.h>

using namespace std;

const static string EXPENSE_T01 = "expenseA";
const static string EXPENSE_T02 = "expenseB";
const static string EXPENSE_T03 = "expenseC";

class Expense {

private:
    string expenseType;
    double value;
public:

    Expense(const string &expenseType, double value);

    double getValue() const;

    void setValue(double value);

    const string &getExpenseType() const;

    void setExpenseType(const string &expenseType);
};


#endif //LIST05_5_EXPENSE_H
