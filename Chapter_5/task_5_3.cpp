#include <iostream>

int main() {

    using namespace std;

    cout << "Enter numbers. Press \"0\" to exit." << endl;
    cout << "Enter number: ";
    double number {};
    cin >> number;
    double sum {};

    while(number) {
        sum += number;
        cout << "Cumulative sum: " << sum << endl;
        cout << "Enter number: ";
        cin >> number;
    }

    return 0;
}
