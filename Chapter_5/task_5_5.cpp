#include <iostream>
#include <string>

int main() {

    using namespace std;

    const string NameOfMonths[] {"January", "February", "March", "April", "May", "June",
                   "July", "August", "September", "October", "November", "December"};
    int sales[12] {};

    cout << "Enter a year's worth of monthly sales." << endl;
    int sum {};
    for (int i = 0; i < sizeof(sales) / sizeof(int); ++i) {
        cout << NameOfMonths[i] << ": ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "Total sales for year: " << sum;

    return 0;
}
