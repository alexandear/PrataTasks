#include <iostream>

void displayTime(double hours, double minutes) {
    std::cout << "Time: " << hours << ":" << minutes;
}

int main() {

    using namespace std;

    cout << "Enter the number of hours: ";
    auto hours = 0;
    cin >> hours;
    auto minutes = 0;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    displayTime(hours, minutes);

    return 0;
}

