#include <iostream>
#include "complex0.h"

int main() {

    using std::cin;
    using std::cout;
    using std::endl;

    Complex a(3.0, 4.0); // initialize to (3,4i)
    Complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c) {
        cout << "c is " << c << '\n';
        cout << "complex conjugate is " << ~c << '\n';
        cout << "a is " << a << "\n";
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "a * 5 is " << a * 5.0 << endl;
        cout << "2 * c is " << 2.0 * c << endl;
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}
