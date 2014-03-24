#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class Complex {
    double real_;
    double imag_;
public:
    Complex(double real = 0.0, double imag = 0.0);
    Complex operator +(const Complex & c) const;
    Complex operator -(const Complex & c) const;
    Complex operator *(const Complex & c) const;
    Complex operator *(double value) const;
    friend Complex operator*(double value, const Complex & c) { return c * value; }
    Complex operator ~() const;
    friend std::ostream & operator <<(std::ostream & os, const Complex & c);
    friend std::istream & operator >>(std::istream & is, Complex & c);
};

#endif // COMPLEX_H_
