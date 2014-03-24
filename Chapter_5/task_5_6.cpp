#include <iostream>
#include <string>

int main() {

    using namespace std;

    const size_t Months {12};
    const string NameOfMonths[Months] {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    const size_t Years {3};
    int sales[Months][Years] {};

    cout << "Enter a year's worth of monthly sales for " << Years << " years.\n";
    int sum {};
    int sumYear[Years] {};
    for (size_t j = 0; j < Years; ++j) {
        cout << j + 1 << " year." << endl;
        for (size_t i = 0; i < Months; ++i) {
            cout << NameOfMonths[i] << ": ";
            cin >> sales[i][j];

            sum += sales[i][j];
            sumYear[j] += sales[i][j];
        }
        cout << endl;
    }

    for (size_t i = 0; i < Years; ++i) {
        cout << "Total sales for " << i + 1 << " year: " << sumYear[i] << endl;
    }

    cout << "Total sales for all " << Years << " years: " << sum << endl;

    return 0;
}
