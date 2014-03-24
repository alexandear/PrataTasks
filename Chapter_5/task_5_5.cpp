#include <iostream>
#include <string>

int main() {

    using namespace std;

    const size_t Months {12};
    const string NameOfMonths[Months] {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int sales[Months] {};

    cout << "Enter a year's worth of monthly sales.\n";
    int sum {};
    for (size_t i = 0; i < Months; ++i) {
        cout << NameOfMonths[i] << ": ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "Total sales for year: " << sum << endl;

    return 0;
}
