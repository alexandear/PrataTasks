#include <iostream>

long long factorial(size_t n);

int main() {

    using namespace std;

    size_t number {};
    cout << "Enter number: ";
    while (cin >> number && cin.get() != 'q') {
        cout << "Factorial: " << factorial(number) << endl;
        cout << "Next number: ";
    }

    return 0;
}

long long factorial(size_t n) {
    return !n ? 1 : n * factorial(n - 1);
}
