#include <iomanip>
#include <sstream>
#include "House.h"

House::House(const Address &address, int numberOfFloors, int numberOfRooms, double landArea, double builtArea)
        : Immobile(address), numberOfFloors(numberOfFloors), numberOfRooms(numberOfRooms), landArea(landArea),
          builtArea(builtArea) {}

const string &House::getDescription() const {
    stringstream landStream, builtStream;
    landStream << fixed << setprecision(2) << landArea;
    builtStream << fixed << setprecision(2) << builtArea;

//    static string s = "";
    static string s = "";
    s = "House description\n" + getAddress().getAddressString();
    s += "\nNumber of Floors: " + to_string(numberOfFloors) + "; Number of rooms: " + to_string(numberOfRooms)
            + "; Land area: " + landStream.str() + "; Built area: " + builtStream.str();
    return s;
}

