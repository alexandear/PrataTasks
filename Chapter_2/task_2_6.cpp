#include <iostream>

double ligthYearToAstronomical(double lightYears) {
    const double AstronomicalsInLigntYear {63240.0};
    return lightYears * AstronomicalsInLigntYear;
}

int main() {

    std::cout << "Enter the number in light years: ";
    double lightYears {};
    std::cin >> lightYears;
    std::cout << lightYears << " light years = "
              << ligthYearToAstronomical(lightYears) << " astronimical units\n";

    return 0;
}

