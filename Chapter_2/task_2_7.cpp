#include <iostream>

void displayTime(int hours, int minutes) {
    std::cout << "Time: " << hours << ":" << minutes;
}

int main() {

    using namespace std;

    cout << "Enter the number of hours: ";
    int hours {};
    cin >> hours;
    int minutes {};
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    displayTime(hours, minutes);

    return 0;
}

