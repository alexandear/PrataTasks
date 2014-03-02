#include <iostream>

int main() {

    using namespace std;

    cout << "Enter distance in kilometers: ";
    double kilometers {};
    cin >> kilometers;

    cout << "Enter petrol in liters: ";
    double liters {};
    cin >> liters;

    cout << "Your car has gotten " << liters * 100.0 / kilometers << " liters per 100 kilometers";

    return 0;
}
