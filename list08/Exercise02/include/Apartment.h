#ifndef LIST08_2_APARTMENT_H
#define LIST08_2_APARTMENT_H

#include "Immobile.h"

class Apartment : public Immobile {

private:
    string position;
    double condominiumFee;
    int parkingSpaces;

public:
    Apartment(const Address &address, const string &position, double condominiumFee, int parkingSpaces);

    const string &getDescription() const override;
};


#endif //LIST08_2_APARTMENT_H
