#include <iostream>
#include "Ophthalmologist.h"

Ophthalmologist::Ophthalmologist(const string &name, float height, float weight, const string &specialization) :
        Doctor(name, height, weight), specialization(specialization){}

void Ophthalmologist::printData() const {
    Doctor::printData();
    cout << "Specialization: " << specialization << endl;
}

void Ophthalmologist::doSpecialization() {
    cout << "Makes you see in HD" << endl << endl;
}

const string &Ophthalmologist::getSpecialization() const {
    return specialization;
}

void Ophthalmologist::setSpecialization(const string &specialization) {
    Ophthalmologist::specialization = specialization;
}
