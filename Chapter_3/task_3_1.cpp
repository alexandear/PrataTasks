#include <iostream>

int main() {

    using namespace std;

    cout << "Enter your height in inches: ___\b\b\b";
    int intInches {};
    cin >> intInches;

    const int InchesInFoot {12};

    int inches {intInches % InchesInFoot};

    int feet = (intInches - inches) / InchesInFoot;

    cout << "Your height is " << feet << " feet and " << inches << " inches";

    return 0;
}
