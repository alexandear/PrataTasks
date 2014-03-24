#include <array>
#include <cctype>
#include <iostream>

int main() {

    using namespace std;

    const size_t Size {10};
    array <double, Size> donationValues;

    size_t i {};
    cout << "Enter up to " << Size << " double values:\n";
    double sum {};
    while (cin >> donationValues.at(i) && i < Size - 1) {
        sum += donationValues[i];
        ++i;
    }

    double average {sum / i};
    cout << "The average of the numbers: " << average << endl;

    size_t cnt {};
    for (auto val : donationValues) {
        if (val > average) {
           ++cnt;
        }
    }
    cout << cnt << " numbers in array are larger than the average\n";

    return 0;
}
