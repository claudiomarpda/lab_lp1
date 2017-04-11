#include "Employee.h"

Employee::Employee(int id, const string &name, float salary) :
        id(id), name(name), salary(salary) {}

int Employee::getId() const {
    return id;
}

void Employee::setId(int id) {
    Employee::id = id;
}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

float Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(float salary) {
    Employee::salary = salary;
}


