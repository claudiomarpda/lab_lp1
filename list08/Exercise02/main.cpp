#include <iostream>
#include <vector>
#include "Immobile.h"
#include "House.h"
#include "Apartment.h"
#include "Land.h"

int main() {

    vector<Immobile*> properties(5);
    Address addresses[] = {
            Address("Rua A", "Mangabeira", 101, "João Pessoa", "58000-000"),
            Address("Rua B", "Mangabeira", 102, "João Pessoa", "58000-000"),
            Address("Rua C", "Altiplano", 103, "João Pessoa", "58000-000"),
            Address("Rua D", "Altiplano", 104, "João Pessoa", "58000-000"),
            Address("Rua E", "Castelo Branco", 105, "João Pessoa", "58000-000"),
    };

    properties[0] = new House(addresses[0], 1, 2, 300, 200);
    properties[1] = new House(addresses[1], 1, 2, 300, 200);
    properties[2] = new Apartment(addresses[2], "South", 1000, 2);
    properties[3] = new Apartment(addresses[3], "East", 2000, 3);
    properties[4] = new Land(addresses[4], 500);

    cout << "----- Polymorphic access-----" << endl << endl;

    // access reference
    for (auto&& item : properties) {
        cout << item->getDescription() << endl << endl;

        delete item;
    }
    properties.clear();

    return 0;
}