#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return 1.8 * celsius + 32.0;
}

int main() {

    using namespace std;

    cout << "Please enter a Celsius value: ";
    auto celsius = 0.0;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius) << " degrees Fahrenheit" << endl;

    return 0;
}

