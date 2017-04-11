#include <iostream>
#include "Employee.h"
#include "Consultant.h"

using namespace std;

int main() {
    Employee e1(100, "Roberto Nóbrega", 5000.0f);
    cout << "ID: " << e1.getId() << "; Name: "<< e1.getName() << "; Salary: $ " << e1.getSalary() << endl;

    Consultant c1(101, "James Botelho", 5000.0f);
    cout << "ID: " << c1.getId() << "; Name: "<< c1.getName() << "; Salary: $ " << c1.getSalary() << endl;
    cout << "Setting percentage to 30%.." << endl;
    cout << "ID: " << c1.getId() << "; Name: "<< c1.getName() << "; Salary: $ " << c1.getSalary(30.0f) << endl;

    cout << "Setting new salary..." << endl;
    e1.setSalary(6000.0f);
    c1.setSalary(6000.0f);
    cout << "ID: " << e1.getId() << "; Name: "<< e1.getName() << "; Salary: $ " << e1.getSalary() << endl;
    cout << "ID: " << c1.getId() << "; Name: "<< c1.getName() << "; Salary: $ " << c1.getSalary() << endl;
    return 0;
}