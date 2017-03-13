/**
 * A simple Person class with constructor, set and get methods.
 */

#ifndef LIST05_4_PERSON_H
#define LIST05_4_PERSON_H

#include <string.h>
#include <iostream>

using namespace std;

class Person {

private:
    string name;
    int age;
    string phone;

public:

    Person(const string &name);

    Person(const string &name, int age, const string &phone);

    // Overload the << operator to show attributes data.
    friend ostream &operator<<(ostream &os, const Person &person);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    const string &getPhone() const;

    void setPhone(const string &name);
};


#endif //LIST05_4_PERSON_H
