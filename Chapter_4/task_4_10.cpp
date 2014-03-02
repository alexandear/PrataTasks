#include <array>
#include <iostream>

int main() {

    using namespace std;

    cout << "Enter three time for the 40-meter dash: " << endl;
    array<double, 3> dash;
    cout << "First: ";
    cin >> dash[0];
    cout << "Second: ";
    cin >> dash[1];
    cout << "Third: ";
    cin >> dash[2];

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(3);
    cout << "Times: " << dash[0] << ", " << dash[1] << ", " << dash[2] << "\n";
    cout << "Average time: " << (dash[0] + dash[1] + dash[2]) / 3;

    return 0;
}
