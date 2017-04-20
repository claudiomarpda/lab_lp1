#ifndef LIST08_2_IMMOBILE_H
#define LIST08_2_IMMOBILE_H

#include "Address.h"

class Immobile {

protected:
    Address address;

public:

    Immobile(const Address &address);

    virtual ~Immobile();

    virtual const Address &getAddress() const;

    virtual const std::string &getDescription() const = 0;

};


#endif //LIST08_2_IMMOBILE_H
