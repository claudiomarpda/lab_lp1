#include "Employee.h"

Employee::Employee(const string &name, int id) : name(name), id(id) {}

Employee::~Employee() {

}

const string &Employee::getName() const {
    return name;
}

int Employee::getId() const {
    return id;
}
