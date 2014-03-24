#include <iostream>

int main() {

    using namespace std;

    cout << "Enter your age: ";
    int age {};
    cin >> age;
    const int MonthsInYear {12};
    cout << "Your age in months is " << MonthsInYear * age << endl;

    return 0;
}

