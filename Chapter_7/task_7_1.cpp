#include <iostream>

double harmonicMean(double x, double y) {
    return 2.0 * x * y / (x + y);
}

int main() {

    using namespace std;

    double x {}, y {};
    cout << "Enter two numbers (0 to quit):\n";
    while(cin >> x >> y && x != 0.0 && y != 0.0) {
        cout << "Harmonic mean: " << harmonicMean(x, y) << endl;
        cout << "Enter two numbers (0 to quit):\n";
    }

    return 0;
}
