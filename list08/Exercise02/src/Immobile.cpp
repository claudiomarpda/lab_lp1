#include "Address.h"
#include "Immobile.h"

Immobile::Immobile(const Address &address) : address(address) {}

const Address &Immobile::getAddress() const {
    return address;
}

Immobile::~Immobile() {

}
