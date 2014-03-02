#include "complex0.h"

Complex::Complex(double real, double imag) {
    real_ = real;
    imag_ = imag;
}

Complex Complex::operator +(const Complex & c) const {
    return Complex(real_ + c.real_, imag_ + c.imag_);
}

Complex Complex::operator -(const Complex & c) const {
    return Complex(real_ - c.real_, imag_ - c.imag_);
}

Complex Complex::operator *(const Complex & c) const {
    return Complex(real_ * c.real_ - imag_ * c.imag_,
                   real_ * c.imag_ + imag_ * c.real_);
}

Complex Complex::operator *(double value) const {
    return Complex(value * real_, value * imag_);
}

Complex Complex::operator ~() const {
    return Complex(real_, -imag_);
}

std::ostream & operator <<(std::ostream & os, const Complex & c) {
    os << "(" << c.real_ << ", " << c.imag_ << "i)";
    return os;
}

std::istream & operator >>(std::istream & is, Complex & c) {
    is >> c.real_ >> c.imag_;
    return is;
}
