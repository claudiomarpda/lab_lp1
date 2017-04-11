#include <iostream>
#include "Worker.h"

Worker::Worker(const string &name, float saalry) : name(name), salary(saalry) {}

const string &Worker::getName() const {
    return name;
}

void Worker::setName(const string &name) {
    Worker::name = name;
}

float Worker::getSalary() const {
    return salary;
}

void Worker::setSalary(float salary) {
    Worker::salary = salary;
}

void Worker::printData() const {
    cout << "Name: " << getName() << "; Base salary: $ " << getSalary() << endl;
}
