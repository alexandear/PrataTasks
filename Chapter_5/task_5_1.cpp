#include <iostream>

int main() {

    using namespace std;

    cout << "Enter two integers." << endl;
    cout << "First: ";
    int first {};
    cin >> first;
    cout << "Second: ";
    int second {};
    cin >> second;

    int sum {};
    for (int i = first; i <= second; ++i) {
        sum += i;
    }
    cout << "The sum of two integers between " << first << " and " << second << " is " << sum;

    return 0;
}
