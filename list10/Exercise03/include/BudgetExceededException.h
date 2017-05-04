#ifndef LIST010_3_BUDGETEXCEEDEDEXCEPTION_H
#define LIST010_3_BUDGETEXCEEDEDEXCEPTION_H

#include <stdexcept>

using namespace std;

class BudgetExceededException : public runtime_error {

public:
    BudgetExceededException(double __arg) : runtime_error(
            "Budget was exceeded. Not enough money for " + to_string(__arg)) {}

    BudgetExceededException() : runtime_error("Budget was exceeded. Not enough money.") {}

};


#endif //LIST10_3_BUDGETEXCEEDEDEXCEPTION_H
