#ifndef LIST08_2_LAND_H
#define LIST08_2_LAND_H

#include <iostream>
#include "Immobile.h"

using namespace std;

class Land : public Immobile{

private:
    double area;

public:
    Land(const Address &address, double area);

    const string &getDescription() const override;
};

#endif //LIST08_2_LAND_H
