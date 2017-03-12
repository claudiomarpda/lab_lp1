#include "Invoice.h"

Invoice::Invoice(int id, const string &description, int quantity, float price) : id(id), description(description),
                                                                                 quantity(quantity), price(price) {}
float Invoice::getInvoiceAmount() {
    if(quantity <= 0 || price <= 0) {
        return 0;
    }
    return quantity * price;
}

int Invoice::getId() const {
    return id;
}

void Invoice::setId(int id) {
    Invoice::id = id;
}

const string &Invoice::getDescription() const {
    return description;
}

void Invoice::setDescription(const string &description) {
    Invoice::description = description;
}

int Invoice::getQuantity() const {
    return quantity;
}

void Invoice::setQuantity(int quantity) {
    Invoice::quantity = quantity;
}

float Invoice::getPrice() const {
    return price;
}

void Invoice::setPrice(float price) {
    Invoice::price = price;
}


