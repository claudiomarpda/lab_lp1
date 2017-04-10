#ifndef LIST07_1_TRIANGLE_H
#define LIST07_1_TRIANGLE_H

#include "GeometricFigure.h"

class Triangle : public GeometricFigure {

private:
    double base;
    double height;

public:
    Triangle(const string &name, double base, double height);

    virtual double calculateArea() const;
};


#endif //LIST07_1_TRIANGLE_H
