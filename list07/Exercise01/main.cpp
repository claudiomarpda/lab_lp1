#include <iostream>
#include <stdlib.h>
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

/**
	Tests Exercise 01
*/
int main() {    

    Triangle t1("Triangle01", 10, 10);
    cout << "Area of " << t1.getName() << ": " << t1.calculateArea() << endl;

    Square s1("Square01", 10);
    cout << "Area of " << s1.getName() << ": " << s1.calculateArea() << endl;

    Circle c1("Circle01", 10);
    cout << "Area of " << c1.getName() << ": " << c1.calculateArea() << endl;

    return 0;
}
