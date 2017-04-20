#ifndef LIST08_2_ADDRESS_H
#define LIST08_2_ADDRESS_H

#include <iostream>
using namespace std;

class Address {
private:
    string street;
    string neighborhood;
    int number;
    string city;
    string cep;

public:
    Address(const string &street, const string &neighborhood, int number, const string &city, const string &cep);

    const string &getStreet() const;

    const string &getNeighborhood() const;

    int getNumber() const;

    const string &getCity() const;

    const string &getCep() const;

    const string &getAddressString() const;

};

#endif //LIST08_2_ADDRESS_H
