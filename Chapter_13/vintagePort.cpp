#include "vintagePort.h"

VintagePort::VintagePort() {
    nickname = new char[1];
    nickname[0] = '\0';
    year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
    : Port(br, "vintage", b) {
    nickname = new char[20];
    std::strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp) {
    nickname = new char[20];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp) {
    if (this == &vp) {
        return *this;
    }
    Port::operator =(vp);
    delete [] nickname;
    nickname = new char[20];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const {
    Port::Show();
    std::cout << "Nickname: " << nickname << "\nYear: " << year << std::endl;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp) {
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}
