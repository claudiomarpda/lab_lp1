/**
 * The orders made in a table of the restaurant.
 * It may include or remove orders and calculate the total amount to be paid.
 */
#ifndef LIST06_03_RESTAURANTTABLE_H
#define LIST06_03_RESTAURANTTABLE_H

#include <vector>
#include "Order.h"

class RestaurantTable {

private:
    vector<Order> orders;

public:

    void addOrder(Order order);

    void clearOrders() ;

    double calculateTotal();
};


#endif //LIST06_03_RESTAURANTTABLE_H
