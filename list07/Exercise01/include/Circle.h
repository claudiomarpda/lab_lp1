#ifndef LIST07_1_CIRCLE_H
#define LIST07_1_CIRCLE_H

#include "GeometricFigure.h"

class Circle : public GeometricFigure {
private:
    double radius;
    float const PI = 3.1416f;

public:
    Circle(const string &name, double radius);

    virtual double calculateArea() const;
};


#endif //LIST07_1_CIRCLE_H
