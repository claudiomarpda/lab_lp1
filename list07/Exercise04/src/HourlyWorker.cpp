#include <iostream>
#include "HourlyWorker.h"

HourlyWorker::HourlyWorker(const string &name, float salary) : Worker(name, salary) {}

float HourlyWorker::calculatePayment(float hours) const {
    cout << "Calculating payment for " << hours << " hours... " << endl;
    float regularSalary = salary * REGULAR_HOURS;

    if (hours <= REGULAR_HOURS) {
        return regularSalary;
    } else {
        float extra = hours - REGULAR_HOURS;
        float extraPayment = salary * extra * EXTRA_BONUS / 100;
        cout << extra << " hours extra adds $ " << extraPayment << endl;
        return regularSalary + extraPayment;
    }
}
