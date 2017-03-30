#include "RestaurantTable.h"

void RestaurantTable::addOrder(Order order) {
    orders.push_back(order);
}

void RestaurantTable::clearOrders() {
    orders.clear();
}

/**
 * Calculates the total value of all orders in a table.
 * @return total value.
 */
double RestaurantTable::calculateTotal() {
    double total = 0;
    for (auto &o : orders) {
        total += o.getPrice() * o.getQuantity();
    }

    return total;
}
