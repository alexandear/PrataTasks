#include <array>
#include <iostream>
#include <string>

int main() {

    using namespace std;

    cout << "Enter three time for the 40-meter dash:\n";
    const size_t Size {3};
    array<double, Size> dash;
    const string Dashes [Size] {"First", "Second", "Third"};
    double sum {};
    for (size_t i = 0; i < Size; ++i) {
        cout << Dashes[i] << ": ";
        cin >> dash[i];
        sum += dash[i];
    }

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(3);
    cout << "Times: ";
    for (size_t i = 0; i < Size; ++i) {
        cout << dash[0] << "  ";
    }
    cout << endl;
    cout << "Average time: " << sum / Size << endl;

    return 0;
}
