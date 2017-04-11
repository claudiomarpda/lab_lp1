#include <iostream>
#include "Otorhinolaryngologist.h"

Otorhinolaryngologist::Otorhinolaryngologist(
        const string &name, float height, float weight, const string &specialization) :
        Doctor(name, height, weight), specialization(specialization) {}

void Otorhinolaryngologist::printData() const {
    Doctor::printData();
    cout << "Specialization: " << specialization << endl;
}

void Otorhinolaryngologist::doSpecialization() {
    cout << "Tells you to turn the volume down" << endl << endl;
}

const string &Otorhinolaryngologist::getSpecialization() const {
    return specialization;
}

void Otorhinolaryngologist::setSpecialization(const string &specialization) {
    Otorhinolaryngologist::specialization = specialization;
}
