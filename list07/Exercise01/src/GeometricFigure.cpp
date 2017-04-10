#include "GeometricFigure.h"

GeometricFigure::GeometricFigure(const string &name) : name(name) {}

const string &GeometricFigure::getName() const {
    return name;
}
