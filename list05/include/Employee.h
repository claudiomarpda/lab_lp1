//
// Created by mz on 09/03/17.
//

#ifndef LIST05_3_EMPLOYEE_H
#define LIST05_3_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {

private:
    string name;
    string surname;
    float salary;

public:

    Employee(const string &name, const string &surname, float salary);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    float getSalary() const;

    void setSalary(float salary);

    float annualSalary();

};


#endif //LIST05_3_EMPLOYEE_H
