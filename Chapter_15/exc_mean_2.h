#include <iostream>
#include <stdexcept>

class bad_hmean : std::logic_error {
    std::string message;
public:
    bad_hmean(const std::string & mes = "Error in hmean():")
        : message(mes), std::logic_error(mes) {}
    const char * what() const noexcept;
};

inline const char * bad_hmean::what() const noexcept {
    return (message + " invalid arguments: a = -b\n").c_str();
}

class bad_gmean : std::logic_error {
    std::string message;
public:
    bad_gmean(const std::string & mes = "Error in gmean():")
        : message(mes), std::logic_error(mes) {}
    const char * what() const noexcept;
};

inline const char * bad_gmean::what() const noexcept {
    return (message + " arguments should be >= 0\n").c_str();
}
