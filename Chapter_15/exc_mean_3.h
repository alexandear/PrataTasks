#include <iostream>
#include <stdexcept>

class bad_mean : public std::logic_error {
protected:
    double value1;
    double value2;
public:
    bad_mean(double v1 = 0, double v2 = 0, const std::string & mes = "Error in mean")
        : std::logic_error(mes), value1(v1), value2(v2) { }
    virtual void mesg() const noexcept = 0;
};

class bad_hmean : public bad_mean {
public:
    bad_hmean(double v1 = 0, double v2 = 0)
        : bad_mean(v1, v2) { }
    void mesg() const noexcept;
};

inline void bad_hmean::mesg() const noexcept {
    std::cout << "Error in hmean(): invalid arguments (" << value1 << ", " << value2 << "): a = -b\n";
}

class bad_gmean : public bad_mean {
public:
    bad_gmean(double v1 = 0, double v2 = 0)
        : bad_mean(v1, v2) { }
    void mesg() const noexcept;
};

inline void bad_gmean::mesg() const noexcept {
    std::cout << "Error in gmean(): arguments (" << value1 << ", " << value2 << ") should be >= 0\n";
}
