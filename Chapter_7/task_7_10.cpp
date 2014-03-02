#include <iostream>

const int Functions = 4;

double calculate (double x, double y, double (*pf)(double x, double y));
double add (double x, double y);
double sub (double x, double y);
double mul (double x, double y);
double div (double x, double y);

int main() {

    using namespace std;

    double x[Functions] {}, y[Functions] {};

    double (*pf[Functions])(double x, double y) = {add, sub, mul, div};
    int i {};
    while (i < Functions && cout << "Enter two numbers:\n" && cin >> x[i] >> y[i]) {
        cout << "Result: " << calculate(x[i], y[i], pf[i]) << endl;
        ++i;
    }

    return 0;
}

double calculate(double x, double y, double (*pf)(double x, double y)) {
    return pf(x, y);
}

double add (double x, double y) {
    return x + y;
}

double sub (double x, double y) {
    return x - y;
}

double mul (double x, double y) {
    return x * y;
}

double div (double x, double y) {
    return y ? x / y : 0.0;
}
