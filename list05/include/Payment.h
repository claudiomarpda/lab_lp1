/**
 * Payment designated to an employee.
 */

#ifndef LIST05_6_PAYMENT_H
#define LIST05_6_PAYMENT_H

#include <iostream>
#include <string.h>

using namespace std;

class Payment {

private:
    string employeeName;
    double paymentValue;

public:
    Payment(const string &employeeName, double paymentValue);

    const string &getEmployeeName() const;

    void setEmployeeName(const string &employeeName);

    double getPaymentValue() const;

    void setPaymentValue(double paymentValue);
};


#endif //LIST05_6_PAYMENT_H
