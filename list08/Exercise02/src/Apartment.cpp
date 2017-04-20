#include <iomanip>
#include <sstream>
#include "Apartment.h"

Apartment::Apartment(const Address &address, const string &position, double condominiumFee, int parkingSpaces)
        : Immobile(address), position(position), condominiumFee(condominiumFee), parkingSpaces(parkingSpaces) {}

const string &Apartment::getDescription() const {
    stringstream feeStream;
    feeStream << fixed << setprecision(2) << condominiumFee;

    static string s = "";
    s = "Apartment description\n" + Apartment::address.getAddressString();
    s += "\nPosition: " + position + "; Condominium fee: " + feeStream.str()
         + "; Parking spaces: " + to_string(parkingSpaces);
    return s;
}
