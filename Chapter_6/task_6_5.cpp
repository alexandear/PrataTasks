#include <iostream>

int main() {

    using namespace std;

    double earning {};
    cout << "Enter earning in tvarps: ";
    double tax {};
    while(cin >> earning && earning > 0) {
        if (earning <= 5000.0) {
            tax = 0.0;
        } else if (earning <= 15000.0) {
            tax = (earning - 5000.0) * 0.1;
        } else if (earning <= 35000.0) {
            tax = 10000.0 * 0.1 + (earning - 15000.0) * 0.15;
        } else {
            tax = 10000.0 * 0.1 + 20000.0 * 0.15 + (earning - 35000.0) * 0.2;
        }
        cout << "Tax is " << tax << endl;
        cout << "Enter earning in tvarps: ";
    }


    return 0;
}
