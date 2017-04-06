#include "Circle.h"

Circle::Circle(const string &name, double radius) : GeometricFigure(name), radius(radius) {}

double Circle::calculateArea() const {
    return PI * (radius * radius); // avoids math import
}
