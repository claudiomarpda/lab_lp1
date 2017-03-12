#include <iostream>
#include <stdlib.h>
#include "Date.h"
#include "Invoice.h"
#include "Employee.h"

using namespace std;

// Prototypes
void ex01();
void ex02();
void ex03();

/**
    ./tests number_of_args arg
    ./tests 1 1
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

void ex03() {
    Employee e1 ("Alisson", "Jorge", 10900);
    Employee e2 ("Amaro", "Neto", 7900);

    cout << "Annual salary of " << e1.getName() << ": " << e1.annualSalary() << endl;
    cout << "Annual salary of " << e2.getName() << ": " << e2.annualSalary() << endl;

    cout << "Setting 10% of increase..." << endl;

    e1.setSalary((float)(e1.getSalary() * 1.1));
    e2.setSalary((float)(e2.getSalary() * 1.1));

    cout << "Annual salary of " << e1.getName() << ": " << e1.annualSalary() << endl;
    cout << "Annual salary of " << e2.getName() << ": " << e2.annualSalary() << endl;
}

void ex02() {
    Invoice i1(10000, "SSD 480GB", 4, 499.9);

    cout << i1.getDescription() << endl;
    cout << "Amount: " << i1.getInvoiceAmount() << endl;

    i1.setPrice(-1);
    cout << "Amount: " << i1.getInvoiceAmount() << endl;

    i1.setQuantity(0);
    cout << "Amount: " << i1.getInvoiceAmount() << endl;
}

void ex01() {
    try {
        cout << "Testing wrong day instance..." << endl;
        Date d3(1, 32, 2000);
    } catch (invalid_argument &ex){
        cout << "Exception occurred: " << ex.what() << endl;
    }

    try{
        cout << "Testing wrong month instance..." << endl;
        Date d4(13, 1, 2000);
    } catch(invalid_argument &ex) {
        cout << "Exception occurred: " << ex.what() << endl;
    }

    try{
        cout << "Testing wrong year instance..." << endl;
        Date d5(1, 1, 3001);
    } catch(invalid_argument &ex) {
        cout << "Exception occurred: " << ex.what() << endl;
    }

    cout << "Correct instance..." << endl;
    Date d2(1, 31, 2000);
    cout << "Date: " << d2 << endl;
    cout << "Advancing day..." << endl;
    d2.advanceDay();
    cout << "Date: " << d2 << endl;
}