#include <iostream>

double ligthYearToAstronimical(double lightYears) {
    return lightYears * 63240.0;
}

int main() {

    using namespace std;

    cout << "Enter the number in light years: ";
    auto lightYears = 0.0;
    cin >> lightYears;
    cout << lightYears << " light years = " << ligthYearToAstronimical(lightYears) << " astronimical units" << endl;

    return 0;
}

