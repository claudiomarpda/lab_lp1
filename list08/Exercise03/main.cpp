#include <iostream>
#include "PayrollControl.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionedEmployee.h"

/**
 * Some polymorphism with vector.
 */

int main() {
    PayrollControl payrollControl;
    vector<Employee *> employees(3);

    employees[0] = new SalariedEmployee("Name one", 1, 1000);
    employees[1] = new HourlyEmployee("Name two", 2, 30, 60);
    employees[2] = new CommissionedEmployee("Name three", 3, 1000, 5000, 5);

    payrollControl.setEmployees(employees);

    cout << "Looking for non existent employee..." << endl;
    try {
        payrollControl.checkEmployeeSalary(4);
    }catch (EmployeeNotFoundException &e) {
        cout << "Exception: " << e.what() << endl << endl;
    }

    payrollControl.setAvailableCash(1000);
    cout << "Calculating payroll without enough money..." << endl;
    try{
        cout << "Payroll total value: " << payrollControl.calculateTotalPayroll() << endl;
    }
    catch(BudgetExceededException &e) {
        cout << "Exception: " << e.what() << endl << endl;
    }

    cout << "Increasing money available for payroll..." << endl;
    payrollControl.setAvailableCash(10000);

    cout << "Checking employees salary in Payroll..." << endl;
    cout << "Employee ID 1: " << payrollControl.checkEmployeeSalary(1) << endl;
    cout << "Employee ID 2: " << payrollControl.checkEmployeeSalary(2) << endl;
    cout << "Employee ID 3: " << payrollControl.checkEmployeeSalary(3) << endl << endl;
    cout << "Payroll total value: " << payrollControl.calculateTotalPayroll() << endl;

    for (auto &&item : employees) {
        delete item;
    }
    employees.clear();

    return 0;
}