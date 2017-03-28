#include "Clock.h"

void Clock::setHorary(int hour, int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Clock::advanceHorary() {
    advanceSecond();
}

void Clock::advanceSecond() {
    if(second < MAX_SECOND - 1) {
        second++;
    }
    else {
        second = 0;
        advanceMinute();
    }
}

void Clock::advanceMinute() {
    if(minute < MAX_MINUTE - 1) {
        minute++;
    }
    else {
        minute = 0;
        advanceHour();
    }
}

void Clock::advanceHour() {
    if(hour < MAX_HOUR - 1) {
        hour++;
    }
    else {
        hour = 0;
        minute = 0;
        second = 0;
    }
}

std::ostream &operator<<(std::ostream &os, const Clock &clock) {
    return os << "h-m-s: " << clock.getHour() << "-" << clock.getMinute() << "-" << clock.getSecond();
}

void Clock::setHour(int hour) {
    Clock::hour = hour;
}

void Clock::setMinute(int minute) {
    Clock::minute = minute;
}

void Clock::setSecond(int second) {
    Clock::second = second;
}

int Clock::getHour() const {
    return hour;
}

int Clock::getMinute() const {
    return minute;
}

int Clock::getSecond() const {
    return second;
}
