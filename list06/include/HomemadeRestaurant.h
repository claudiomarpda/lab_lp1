/**
 * The whole restaurant with all its tables and orders.
 */

#ifndef LIST06_03_HOMEMADERESTAURANT_H
#define LIST06_03_HOMEMADERESTAURANT_H


#include "RestaurantTable.h"

class HomemadeRestaurant {
private:
    vector<RestaurantTable> tables;

public:
    void addTable(RestaurantTable table);

    void addOrderToTable(unsigned int tableIndex, Order order);

    double calculateTotalSales();

    const vector<RestaurantTable> &getTables() const;

    void clearTableAt(unsigned int index);
};


#endif //LIST06_03_HOMEMADERESTAURANT_H
