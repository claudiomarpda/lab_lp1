#include <iostream>
#include "HomemadeRestaurant.h"

void HomemadeRestaurant::addTable(RestaurantTable table) {
    tables.push_back(table);
}

void HomemadeRestaurant::addOrderToTable(unsigned int tableIndex, Order order) {
    if(tableIndex < tables.size()) {
        tables.at(tableIndex).addOrder(order);
        std::cout << "Item number "<< order.getNumber() << " added to table " << tableIndex + 1 << endl;
    }
}

double HomemadeRestaurant::calculateTotalSales() {
    double total = 0;

    for(auto & t : tables) {
        total += t.calculateTotal();
    }

    return total;
}

const vector<RestaurantTable> &HomemadeRestaurant::getTables() const {
    return tables;
}

void HomemadeRestaurant::clearTableAt(unsigned int index) {
    if(index > tables.size()) {
        return;
    }
    tables.at(index).clearOrders();
}