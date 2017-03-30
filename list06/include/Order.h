/**
 * An order available for clients.
 */

#ifndef LIST06_03_ORDER_H
#define LIST06_03_ORDER_H

#include <string>

using namespace std;

class Order {

private:
    unsigned int number;
    unsigned int quantity;
    string description;
    float price;

public:;
    Order(unsigned int number, unsigned int quantity, const string &description, float price);

    float getPrice() const;

    unsigned int getQuantity() const;

    unsigned int getNumber() const;
};


#endif //LIST06_03_ORDER_H
