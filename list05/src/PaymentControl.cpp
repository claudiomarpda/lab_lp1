#include "PaymentControl.h"

void PaymentControl::setPayments(const vector<Payment> &payments) {
    PaymentControl::payments = payments;
}

/**
 * Calculates the total of payments according to @payments vector.
 * @return the total value or 0, if empty.
 */
double PaymentControl::calculateTotalPayment() {
    if(payments.empty()) {
        return 0;
    }

    double total = 0;

    for(auto const& e : payments) {
        total += e.getPaymentValue();
    }
    return total;
}

/**
 * Tells if there is an payment for an specific employee.
 * @param employeeName will be searched.
 * @return true if found, false otherwise.
 */
bool PaymentControl::isTherePaymentForEmployee(const string &employeeName) {
    if(payments.empty()) {
        return false;
    }

    for(auto const& e : payments) {
        if(e.getEmployeeName().compare(employeeName) == 0) { // the name is equal
            return true;
        }
    }
    return false;
}
