#ifndef LIST05_5_EXPENSECONTROL_H
#define LIST05_5_EXPENSECONTROL_H


#include "Expense.h"
#include <vector>

class ExpenseControl {

private:
    vector<Expense> expenses;

public:
    void setExpenses(const vector<Expense> &expenses);
    double calculateTotalExpenses();
    bool isThereExpenseOfType(string expenseType);
};


#endif //LIST05_5_EXPENSECONTROL_H
