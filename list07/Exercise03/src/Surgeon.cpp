#include <iostream>
#include "Surgeon.h"

Surgeon::Surgeon(const string &name, float height, float weight, const string &specialization) :
        Doctor(name, height, weight), specialization(specialization) {}

void Surgeon::printData() const{
    Doctor::printData();
    cout << "Specialization: " << specialization << endl;
}

void Surgeon::doSpecialization() const{
    cout << "Cuts and sews you" << endl << endl;
}

const string &Surgeon::getSpecialization() const {
    return specialization;
}

void Surgeon::setSpecialization(const string &specialization) {
    Surgeon::specialization = specialization;
}
