#include <iostream>
#include <string>

int main() {

    using namespace std;

    const string NameOfMonths[] {"January", "February", "March", "April", "May", "June",
                   "July", "August", "September", "October", "November", "December"};
    const int Months = 12;
    const int Years = 3;
    int sales[Months][Years] {};

    cout << "Enter a year's worth of monthly sales for " << Years << " years." << endl;
    int sum {};
    int sumYear[Years] {};
    for (int j = 0; j < Years; ++j) {
        cout << j + 1 << " year." << endl;
        for (int i = 0; i < Months; ++i) {
            cout << NameOfMonths[i] << ": ";
            cin >> sales[i][j];

            sum += sales[i][j];
            sumYear[j] += sales[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < Years; ++i) {
        cout << "Total sales for " << i + 1 << " year: " << sumYear[i] << endl;
    }

    cout << "Total sales for all " << Years << " years: " << sum;

    return 0;
}
