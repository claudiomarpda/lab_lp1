/**
 * Control payments of employees.
 */

#ifndef LIST05_6_PAYMENTCONTROL_H
#define LIST05_6_PAYMENTCONTROL_H

#include <vector>
#include "Payment.h"

class PaymentControl {

private:
    vector<Payment> payments;

public:
    void setPayments(const vector<Payment> &payments);
    double calculateTotalPayment();
    bool isTherePaymentForEmployee(const string &employeeName);
};


#endif //LIST05_6_PAYMENTCONTROL_H
