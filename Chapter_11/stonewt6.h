#ifndef STONEWT_H_
#define STONEWT_H_
#include <ostream>

class Stonewt {

public:
    enum Mode {STONE, INT, FLOAT};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    Mode mode_;
public:
    Stonewt(double lbs, Mode mode = FLOAT);          // constructor for double pounds
    Stonewt(int stn, double lbs, Mode mode = STONE); // constructor for stone, lbs
    Stonewt(Mode mode = INT);                        // default constructor
    ~Stonewt();
    void setMode(Mode mode);
    Stonewt operator +(const Stonewt & stn) const;
    Stonewt operator -(const Stonewt & stn) const;
    Stonewt operator *(const Stonewt & stn) const;
    bool operator !=(const Stonewt & stn) const;
    bool operator <(const Stonewt & stn) const;
    bool operator <=(const Stonewt & stn) const;
    bool operator ==(const Stonewt & stn) const;
    bool operator >(const Stonewt & stn) const;
    bool operator >=(const Stonewt & stn) const;
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & stn);
};

#endif // STONEWT_H_
