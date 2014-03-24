#include "mytime3.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(size_t h, size_t m ) {
    hours = h;
    minutes = m;
}

void Time::AddMin(size_t m) {
    minutes += m;
    hours += minutes / MinutesInHour;
    minutes %= MinutesInHour;
}

void Time::AddHr(size_t h) {
    hours += h;
}

void Time::Reset(size_t h, size_t m) {
    hours = h;
    minutes = m;
}

Time operator+(const Time & t1, const Time & t2) {
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / Time::MinutesInHour;
    sum.minutes %= Time::MinutesInHour;
    return sum;
}

Time operator-(const Time & t1, const Time & t2) {
    Time diff;
    size_t tot1 {}, tot2 {};
    tot1 = t2.minutes + Time::MinutesInHour * t2.hours;
    tot2 = t1.minutes + Time::MinutesInHour * t1.hours;
    diff.minutes = (tot2 - tot1) % Time::MinutesInHour;
    diff.hours = (tot2 - tot1) / Time::MinutesInHour;
    return diff;
}

Time operator*(const Time & t, double mult) {
    Time result;
    unsigned long totalminutes = t.hours * mult * Time::MinutesInHour + t.minutes * mult;
    result.hours = totalminutes / Time::MinutesInHour;
    result.minutes = totalminutes % Time::MinutesInHour;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os; 
}
