#include "ExpenseControl.h"

void ExpenseControl::setExpenses(const vector<Expense> &expenses) {
    ExpenseControl::expenses = expenses;
}

/**
 * Calculates the total of expenses according to @expenses vector.
 * @return the total value or 0, if empty.
 */
double ExpenseControl::calculateTotalExpenses() {
    if(expenses.empty()) {
        return 0;
    }

    double total = 0;

    for(auto const& e : expenses) {
        total += e.getValue();
    }
    return total;
}

/**
 * Tells if there is an expense of given type.
 * @param expenseType is the type given
 * @return true if found, false otherwise.
 */
bool ExpenseControl::isThereExpenseOfType(const string expenseType) {
    if(expenses.empty()) {
        return false;
    }

    for(auto const& e : expenses) {
        if(e.getExpenseType().compare(expenseType) == 0) {
            return true;
        }
    }

    return false;
}
