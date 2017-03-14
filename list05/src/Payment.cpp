#include "Payment.h"

Payment::Payment(const string &employeeName, double paymentValue) : employeeName(employeeName),
                                                                    paymentValue(paymentValue) {}

const string &Payment::getEmployeeName() const {
    return employeeName;
}

void Payment::setEmployeeName(const string &employeeName) {
    Payment::employeeName = employeeName;
}

double Payment::getPaymentValue() const {
    return paymentValue;
}

void Payment::setPaymentValue(double paymentValue) {
    Payment::paymentValue = paymentValue;
}
