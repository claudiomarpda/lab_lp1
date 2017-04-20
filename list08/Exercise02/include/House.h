#ifndef LIST08_2_HOUSE_H
#define LIST08_2_HOUSE_H

#include "Immobile.h"

class House : public Immobile{

private:
    int numberOfFloors;
    int numberOfRooms;
    double landArea;
    double builtArea;

public:
    House(const Address &address, int numberOfFloors, int numberOfRooms, double landArea, double builtArea);

    const string &getDescription() const override;

};


#endif //LIST08_2_HOUSE_H
