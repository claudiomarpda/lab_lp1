#include <iostream>
#include <stdlib.h>
#include "Clock.h"
#include "Television.h"
#include "HomemadeRestaurant.h"

using namespace std;

// Prototypes
void ex01();
void ex02();
void ex03();

/**
    Main function makes all the tests asked.

    @param argc is the number of arguments
    @param argv contains the arguments
*/
int main(int argc, char* argv[]) {    

    if(argc < 3) {
        cout << 
        "Two arguments are necessary: " << endl <<
        "First: number of arguments" << endl <<
        "Second: number of exercise" << endl;

        cout << "Example: ./tests 1 1" << endl;
        cout << "Try again." << endl;
        exit(1);
    }

    int exercise = atoi(argv[2]);

    switch(exercise) {
        case 1:
            ex01(); 
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
    }

    return 0;
}

/**
    Clock tests
*/
void ex01() {
    Clock c1;
    c1.setHorary(9, 3, 59);

    cout << "First horary ";
    cout << c1 << endl;

    int oneDayInSeconds = MAX_SECOND * MAX_MINUTE * MAX_HOUR;

    // Tests all advance cases
    // Loops a whole day
    for(int i = 0; i< oneDayInSeconds; i++) {
        c1.advanceHorary();
    }

    // this horary must be the same as the first output
    cout << "Second horary after 24 hours ";
    cout << c1 << endl;
}
/**
    Television tests
*/
void ex02() {
    Television t1;
    cout << "Initial channel " << t1.getChannel() << endl;
    cout << "Initial volume " << t1.getVolume() << endl;

    cout << "Volume up 10x..." << endl;
    for(int i = 0; i < 10; i++) {
        t1.volumeUp();
    }
    cout << "Volume now is " << t1.getVolume() << endl;

    cout << "Volume down 5x..." << endl;
    for(int i = 0; i < 5; i++) {
        t1.volumeDown();
    }
    cout << "Volume now is " << t1.getVolume() << endl;

    cout << "Setting channel to " << 9 << endl;
    t1.setChannel(9);
    cout << "Channel now is " << t1.getChannel() << endl;

    cout << "Channel up 20x..." << endl;
    for(int i = 0; i < 20; i++) {
        t1.channelUp();
    }
    cout << "Channel now is " << t1.getChannel() << endl;

    cout << "Channel down 20x..." << endl;
    for(int i = 0; i < 20; i++) {
        t1.channelDown();
    }
    cout << "Channel now is " << t1.getChannel() << endl;
}

/**
    Restaurant tests
*/
void ex03() {
    cout << "Creating restaurant.." << endl;
    HomemadeRestaurant r;

    cout << "Creating tables.." << endl;
    RestaurantTable t1;
    RestaurantTable t2;

    cout << "Adding tables to the restaurant..." << endl;
    r.addTable(t1);
    r.addTable(t2);

    cout << "Creating orders.." << endl;
    Order o1(101, 2, "This is a description of an item.", 5.0f);
    Order o2(102, 2, "This is a description of an item.", 10.0f);

    Order o3(103, 5, "This is a description of an item.", 2.0f);
    Order o4(104, 1, "This is a description of an item.", 4.0f);

    cout << "Adding orders to tables 01" << endl;
    // add orders to table 01
    r.addOrderToTable(0, o1);
    r.addOrderToTable(0, o2);

    cout << "Adding orders to tables 02" << endl;
    // add orders to table 02
    r.addOrderToTable(1, o3);
    r.addOrderToTable(1, o4);

    cout << "Total of sales: " << r.calculateTotalSales() << endl;

    cout << "Clearing orders of table 01..." << endl;
    r.clearTableAt(0);
    cout << "Clearing orders of table 02..." << endl;
    r.clearTableAt(1);
    cout << "Total of sales table 01: " << t1.calculateTotal() << endl;
    cout << "Total of sales table 02: " << t2.calculateTotal() << endl;
    cout << "Total of sales: " << r.calculateTotalSales() << endl;
}