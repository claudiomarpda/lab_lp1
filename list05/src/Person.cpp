#include "Person.h"

// Constructor only for name
Person::Person(const string &name) : name(name){}

// Constructor for the three attributes
Person::Person(const string &name, int age, const string &phone) : name(name), age(age), phone(phone) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const string &Person::getPhone() const {
    return Person::phone;
}

void Person::setPhone(const string &phone) {
    Person::phone = phone;
}

ostream &operator<<(ostream &os, const Person &person) {
    return os << person.getName() << ", " << person.getAge() << ", " << person.getPhone();
}
