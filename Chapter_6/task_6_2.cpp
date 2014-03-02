#include <array>
#include <cctype>
#include <iostream>

int main() {

    using namespace std;

    array <double, 10> donationValues;

    int i {};
    cout << "Enter up to 10 double values:\n";
    double sum {};
    while (cin >> donationValues.at(i) && i < 9) {
        sum += donationValues.at(i);
        ++i;
    }

    double average = sum/i;
    cout << "The average of the numbers: " << average << endl;

    int cnt {};
    for (auto val : donationValues) {
        if (val > average) {
           ++cnt;
        }
    }
    cout << cnt << " numbers in array are larger than the average\n";

    return 0;
}
