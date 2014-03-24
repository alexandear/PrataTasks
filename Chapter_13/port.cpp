#include "port.h"

Port::Port(const char * br, const char * st, int b) {
    brand = new char[20];
    std::strcpy(brand, br);
    std::strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p) {
    brand = new char[20];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator =(const Port & p) {
    if (this != &p) {
        delete [] brand;
        brand = new char[20];
        std::strcpy(brand, p.brand);
        std::strcpy(style, p.style);
        bottles = p.bottles;
    }
    return *this;
}

Port & Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b) {
    if (bottles >= b) {
        bottles -= b;
    } else {
        std::cout << "Number of bottles can't by below zero\n";
    }
    return *this;
}

void Port::Show() const {
    using std::cout;
    using std::endl;
    cout << "Brand: " << brand << "\nKind: " << style
         << "\nBottles: " << bottles << endl;
}

std::ostream & operator<<(std::ostream & os, const Port & p) {
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}
