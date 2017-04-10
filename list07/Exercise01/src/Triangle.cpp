#include "Triangle.h"

Triangle::Triangle(const string &name, double base, double height) :
        GeometricFigure(name), base(base), height(height) {}

double Triangle::calculateArea() const {
    return (base * height) / 2;
}
