#include <iostream>

int main() {

    using namespace std;

    const size_t Size {4};
    const float Tax[Size] {0, 0.1, 0.15, 0.2};
    const int Tvarps[Size] {5000, 10000, 20000, 35000};

    double earning {};
    cout << "Enter earning in tvarps: ";
    double tax {};
    while(cin >> earning && earning > 0) {
        for (size_t i = 0; i < Size && earning >=0 ; ++i) {
            if (i < Size - 1) {
                earning -= Tvarps[i];
                tax += Tvarps[i] * Tax[i];
            } else {
                tax += earning * Tax[i];
            }
        }
        cout << "Tax is " << tax << endl;
        cout << "Enter earning in tvarps: ";
    }

    return 0;
}
