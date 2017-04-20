#include <sstream>
#include <iomanip>
#include "Land.h"

Land::Land(const Address &address, double area) : Immobile(address), area(area) {}

const string &Land::getDescription() const {
    stringstream areaStream;
    areaStream << fixed << setprecision(2) << area;

    static string s = "";
    s = "Land description\n" + Land::address.getAddressString();
    s += "\nArea: " + areaStream.str();
    return s;
}
