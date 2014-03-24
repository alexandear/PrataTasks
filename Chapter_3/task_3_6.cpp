#include <iostream>

int main() {

    using namespace std;

    cout << "Enter distance in kilometers: ";
    double kilometers {};
    cin >> kilometers;

    cout << "Enter petrol in liters: ";
    double liters {};
    cin >> liters;

    const double Kilometers {100.0};
    cout << "Your car has gotten " << liters * Kilometers / kilometers
         << " liters per 100 kilometers\n";

    return 0;
}
