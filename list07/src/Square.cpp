#include "Square.h"

Square::Square(const string &name, double side) : GeometricFigure(name), side(side) {}

double Square::calculateArea() const {
    return side * side;
}
