/**
 * Simple class to represents a horary with didactic purpose and it is not appropriated for real purpose.
 */
#ifndef LIST06_1_CLOCK_H
#define LIST06_1_CLOCK_H

#include <ostream>

const int MAX_SECOND = 60;
const int MAX_MINUTE = 60;
const int MAX_HOUR = 24;

class Clock {
private:
    int hour;
    int minute;
    int second;

    void advanceSecond();

    void advanceMinute();

    void advanceHour();

public:
    int getHour() const;

    int getMinute() const;

    int getSecond() const;

    void setHour(int hour);

    void setMinute(int minute);

    void setSecond(int second);

    void setHorary(int hour, int minute, int second);

    void advanceHorary();

    friend std::ostream &operator<<(std::ostream &os, const Clock &date);
};


#endif //LIST06_1_CLOCK_H
