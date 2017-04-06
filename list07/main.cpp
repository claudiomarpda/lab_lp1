#include <iostream>
#include <stdlib.h>
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

// Prototypes
void ex01();


/**
	Tests simple cases of inheritance.

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
    }

    return 0;
}

void ex01() {
    Triangle t1("Triangle01", 10, 10);
    cout << "Area of " << t1.getName() << ": " << t1.calculateArea() << endl;

    Square s1("Square01", 10);
    cout << "Area of " << s1.getName() << ": " << s1.calculateArea() << endl;

    Circle c1("Circle01", 10);
    cout << "Area of " << c1.getName() << ": " << c1.calculateArea() << endl;
}