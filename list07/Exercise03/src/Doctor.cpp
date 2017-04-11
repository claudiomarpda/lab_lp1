#include <iostream>
#include "Doctor.h"

Doctor::Doctor(const string &name, float height, float weight) :
        name(name), height(height), weight(weight) {}

const string &Doctor::getName() const {
    return name;
}

void Doctor::setName(const string &name) {
    Doctor::name = name;
}

float Doctor::getHeight() const {
    return height;
}

void Doctor::setHeight(float height) {
    Doctor::height = height;
}

float Doctor::getWeight() const {
    return weight;
}

void Doctor::setWeight(float weight) {
    Doctor::weight = weight;
}

void Doctor::printData() const {
    cout << "Name: " << getName() << "; Height: " << getHeight() << "m; Weight: " << getWeight() << "kg"<< endl;
}
