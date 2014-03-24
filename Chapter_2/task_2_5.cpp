#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return 1.8 * celsius + 32.0;
}

int main() {

    std::cout << "Please enter a Celsius value: ";
    double celsius {};
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius)
              << " degrees Fahrenheit\n";

    return 0;
}

