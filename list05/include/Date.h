/**
 * This Date is not appropriated for real usage.
 */

#ifndef LIST05_DATE_H
#define LIST05_DATE_H

using namespace std;

const int DAY_MIN = 1;
const int DAY_MAX = 31;
const int MONTH_MIN = 1;
const int MONTH_MAX = 12;
const int YEAR_MIN = -3000;
const int YEAR_MAX = 3000;


class Date {

private:
    int day;
    int month;
    int year;

public:

    Date(int day, int month, int year) throw(invalid_argument);

    friend std::ostream &operator<<(std::ostream &os, const Date &date);

    void advanceDay();

    void advanceMonth();

    void advanceYear();

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);
};


#endif //LIST05_DATE_H
