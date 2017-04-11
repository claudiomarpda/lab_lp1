#include <iostream>
#include "Gynecologist.h"

Gynecologist::Gynecologist(const string &name, float height, float weight, const string &specialization) :
        Doctor(name, height, weight), specialization(specialization) {}

void Gynecologist::printData() const {
    Doctor::printData();
    cout << "Specialization: " << specialization << endl;
}

const string &Gynecologist::getSpecialization() const {
    return specialization;
}

void Gynecologist::setSpecialization(const string &specialization) {
    Gynecologist::specialization = specialization;
}

void Gynecologist::doSpecialization() const {
    cout << "Takes care of life makers" << endl;
}
