#include <iostream>

long long factorial(int n);

int main() {

    using namespace std;

    int number {};
    cout << "Enter number: ";
    while (cin >> number && cin.get() != 'q') {
        cout << "Factorial: " << factorial(number) << endl;
        cout << "Next number: ";
    }

    return 0;
}

long long factorial(int n) {
    return !n ? 1 : n * factorial(n - 1);
}
