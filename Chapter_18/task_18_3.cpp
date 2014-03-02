#include <climits>
#include <iostream>

long double sum_values() {
    return 0.0;
}

template<typename T, typename... Args>
long double sum_values(const T & value, const Args & ... args) {
    return value + sum_values(args...);
}

int main() {

    using std::cout;
    using std::endl;

    cout << "0 parameter : " << sum_values() << endl;
    cout << "1 parameter(5) : " << sum_values(5) << endl;
    cout << "2 parameters(4, 9.1) : " << sum_values(4, 9.1) << endl;
    cout << "3 parameters('a', 64, 1.4) : " << sum_values('a', 64, 1.4) << endl;
    cout << "4 parameters(1, INT_MIN, 3, INT_MAX) : " << sum_values(1, INT_MIN, 3, INT_MAX) << endl;

    return 0;
}
