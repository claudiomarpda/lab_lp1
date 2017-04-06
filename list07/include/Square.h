#ifndef LIST07_1_SQUARE_H
#define LIST07_1_SQUARE_H

#include "GeometricFigure.h"

class Square : public GeometricFigure{

private:
    double side;

public:
    Square(const string &name, double side);

    double calculateArea() const;
};

#endif //LIST07_1_SQUARE_H
