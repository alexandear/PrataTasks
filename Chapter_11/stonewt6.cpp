#include <iostream>
using std::cout;
#include "stonewt6.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode mode) {
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode_ = mode;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode mode) {
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn + lbs;
    mode_ = mode;
}

Stonewt::Stonewt(Mode mode) {         // default constructor, wt = 0
    stone = pounds = pds_left = 0;
    mode_ = mode;
}

Stonewt::~Stonewt() { }

void Stonewt::setMode(Mode mode) {
    mode_ = mode;
}

Stonewt Stonewt::operator +(const Stonewt & stn) const {
    return Stonewt(pounds + stn.pounds);
}

Stonewt Stonewt::operator -(const Stonewt & stn) const {
    return Stonewt(pounds - stn.pounds);
}

Stonewt Stonewt::operator *(const Stonewt & stn) const {
    return Stonewt(pounds * stn.pounds);
}

bool Stonewt::operator !=(const Stonewt & stn) const {
    return pounds != stn.pounds;
}

bool Stonewt::operator <(const Stonewt & stn) const {
    return pounds < stn.pounds;
}

bool Stonewt::operator <=(const Stonewt & stn) const {
    return pounds <= stn.pounds;
}

bool Stonewt::operator ==(const Stonewt & stn) const {
    return pounds == stn.pounds;
}

bool Stonewt::operator >(const Stonewt & stn) const {
    return pounds > stn.pounds;
}

bool Stonewt::operator >=(const Stonewt & stn) const {
    return pounds >= stn.pounds;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & stn) {
    if (stn.mode_ == Stonewt::STONE) {
        os << stn.stone << " stone, " << stn.pds_left << " pounds\n";
    } else {
        os << stn.pounds << " pounds\n";
    }
    return os;
}
