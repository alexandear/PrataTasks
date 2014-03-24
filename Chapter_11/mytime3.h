#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Time {

    size_t hours;
    size_t minutes;
public:
    static const size_t MinutesInHour {60};
    Time();
    Time(size_t h, size_t m = 0);
    void AddMin(size_t m);
    void AddHr(size_t h);
    void Reset(size_t h = 0, size_t m = 0);
    friend Time operator+(const Time & t1, const Time & t2);
    friend Time operator-(const Time & t1, const Time & t2);
    friend Time operator*(const Time & t, double m);
    friend Time operator*(double m, const Time & t) { return t * m; }
    friend std::ostream & operator<<(std::ostream & os, const Time & t);

};

#endif // MYTIME3_H_
