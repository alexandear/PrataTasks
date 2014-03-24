#include <iostream>

int main() {

    using namespace std;

    cout << "Enter an automobile gasoline consumption figure "
            "in the European style (liters per 100 kilometers): ";
    double europeanConsumption {};
    cin >> europeanConsumption;

    const double LittersInGallon {3.875};
    const double MilesIn100Kilometers {62.14};

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(4);
    cout << europeanConsumption << " l/100 km is "
         << LittersInGallon * MilesIn100Kilometers / europeanConsumption
         << " mpg\n";

    return 0;
}
