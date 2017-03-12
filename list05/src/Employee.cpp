//
// Created by mz on 09/03/17.
//

#include "Employee.h"

Employee::Employee(const string &name, const string &surname, float salary) : name(name), surname(surname), salary(salary){
    if(salary < 0) {
        this->salary = 0;
    }
}

float Employee::annualSalary() {
    return 12 * salary;
}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

const string &Employee::getSurname() const {
    return surname;
}

void Employee::setSurname(const string &surname) {
    Employee::surname = surname;
}

float Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(float salary) {
    Employee::salary = salary;
}



