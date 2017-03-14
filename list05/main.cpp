#include <iostream>
#include <stdlib.h>
#include "Date.h"
#include "Invoice.h"
#include "Employee.h"
#include "Person.h"
#include "Expense.h"
#include "ExpenseControl.h"

using namespace std;

// Prototypes
void ex01();
void ex02();
void ex03();
void ex04();
void ex05();

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
        case 4:
            ex04();
            break;
        case 5:
            ex05();
            break;
    }

    return 0;
}

void ex05() {
    Expense expense01 (EXPENSE_T01, 5000);
    Expense expense02 (EXPENSE_T02, 20000);
    vector<Expense> expenses = {expense01, expense02};

    ExpenseControl expenseControl;
    expenseControl.setExpenses(expenses);

    cout << "Is there expense of type " << EXPENSE_T01 << "? ";
    expenseControl.isThereExpenseOfType(EXPENSE_T01)? cout << "Yes" << endl : cout << "No" << endl;
    cout << "Is there expense of type " << EXPENSE_T03 << "? ";
    expenseControl.isThereExpenseOfType(EXPENSE_T03)? cout << "Yes" << endl: cout << "No" << endl;

    cout << "Total of expenses: " << expenseControl.calculateTotalExpenses() << endl;
}

void ex04() {
    Person p1("Roberto");
    cout << p1 << endl;
    p1.setAge(26);
    p1.setPhone("+55 083 911112222");
    cout << p1 << endl;

    Person p2("James", 21, "+55 083 911113333");
    cout << p2 << endl;
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