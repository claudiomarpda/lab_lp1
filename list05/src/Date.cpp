#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int month, int day, int year) throw(invalid_argument)/*: day(day), month(month), year(year) */{

    if (day < DAY_MIN || day > DAY_MAX) {
        throw invalid_argument("Invalid day");
    }

    if (month < MONTH_MIN || month > MONTH_MAX) {
        throw invalid_argument("Invalid month");
    }

    if (year < YEAR_MIN || year > YEAR_MAX) {
        throw invalid_argument("Invalid year");
    }

    this->day = day;
    this->month = month;
    this->year = year;
    cout << "Date created." << endl;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

void Date::advanceDay() {
    if (this->day == DAY_MAX) {
        this->day = DAY_MIN;
        advanceMonth();
    } else {
        this->day++;
    }
}

void Date::advanceMonth() {
    if (this->month > MONTH_MAX) {
        this->month = MONTH_MIN;
        advanceYear();
    } else {
        this->month++;
    }
}

void Date::advanceYear() {
    this->year++;
}

std::ostream &operator<<(std::ostream &os, const Date &date) {
    return os << "m-d-y: " << date.getMonth() << "-" << date.getDay() << "-" << date.getYear();
}


