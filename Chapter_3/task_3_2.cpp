#include <iostream>

int main() {

    using namespace std;

    cout << "Enter your height in inches and feet:\n";
    cout << "inches: ___\b\b\b""";
    int intInches {};

    cin >> intInches;
    cout << "feet: ___\b\b\b";

    int feet {};
    cin >> feet;

    int pounds {};
    cout << "Your weight in pounds: ___\b\b\b";
    cin >> pounds;

    const int InchesInFoot {12};
    int inches {intInches + feet * InchesInFoot};

    const double InchesInMeter {0.0254};
    double meters {inches * InchesInMeter};

    const double PoundsInKilogram {2.2};

    double kilograms {pounds / PoundsInKilogram};

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(3);
    cout << "Your BMI = " << kilograms / (meters * meters) << endl;

    return 0;
}
