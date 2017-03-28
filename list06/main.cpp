#include <iostream>
#include <stdlib.h>
#include "Clock.h"

using namespace std;

// Prototypes
void ex01();
/*void ex02();
void ex03();*/

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
        /*case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;*/
    }

    return 0;
}

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