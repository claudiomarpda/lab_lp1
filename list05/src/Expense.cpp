#include "Expense.h"

Expense::Expense(const string &expenseType, double value) : expenseType(expenseType), value(value) {}

double Expense::getValue() const {
    return value;
}

void Expense::setValue(double value) {
    Expense::value = value;
}

const string &Expense::getExpenseType() const {
    return expenseType;
}

void Expense::setExpenseType(const string &expenseType) {
    Expense::expenseType = expenseType;
}

