#include <iostream>
#include "SalariedWorker.h"
#include "HourlyWorker.h"

int main() {

    HourlyWorker hourly("Italo Ramos", 20.0f);
    hourly.printData();
    cout << "Payment: $ " << hourly.calculatePayment(40.0f) << endl;
    cout << "Payment: $ " << hourly.calculatePayment(50.0f) << endl;
    hourly.setSalary(30.0f);
    cout << "Payment: $ " << hourly.calculatePayment(40.0f) << endl;
    cout << "Payment: $ " << hourly.calculatePayment(50.0f) << endl;

    cout << endl;
    SalariedWorker salaried("Carlos Alberto", 1000.0f);
    salaried.printData();
    cout << "Payment: $ " << salaried.calculatePayment() << endl;

    cout << "Setting new salary" << endl;
    salaried.setSalary(1500.0f);
    cout << "Payment: $ " << salaried.calculatePayment() << endl;
    return 0;
}