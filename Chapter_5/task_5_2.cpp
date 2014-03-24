#include <array>
#include <iostream>

int main() {
    using namespace std;

    const int ArSize {101};
    array <long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (size_t i = 2; i < ArSize; i++) {
        factorials[i] = i * factorials[i-1];
    }

    for (size_t i = 0; i < ArSize; i++) {
        cout << i << "! = " << factorials[i] << endl;
    }

    return 0;
}
