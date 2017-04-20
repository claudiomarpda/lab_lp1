#include "Address.h"

Address::Address(const string &street, const string &neighborhood, int number, const string &city, const string &cep)
        : street(street), neighborhood(neighborhood), number(number), city(city), cep(cep) {}

const string &Address::getStreet() const {
    return street;
}

const string &Address::getNeighborhood() const {
    return neighborhood;
}

int Address::getNumber() const {
    return number;
}

const string &Address::getCity() const {
    return city;
}

const string &Address::getCep() const {
    return cep;
}

const std::string &Address::getAddressString() const {
    static string s = "";
    s = "Street: " + street +"; Neighborhood: " + neighborhood + "; Number: " + to_string(number)
    + "; City: " + city + "; CEP: " + cep;
    return s;
}
