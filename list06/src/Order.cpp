#include "Order.h"

Order::Order(unsigned int number, unsigned int quantity,
             const string &description, float price) :
        number(number), quantity(quantity), description(description), price(price) {}

float Order::getPrice() const {
    return price;
}

unsigned int Order::getQuantity() const {
    return quantity;
}

unsigned int Order::getNumber() const {
    return number;
}

