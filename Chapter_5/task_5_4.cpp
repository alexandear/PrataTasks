#include <iostream>

int main() {

    using namespace std;

    const double OriginalBalance = 100;

    double balanceDaphne {OriginalBalance};
    double balanceCleo {OriginalBalance};

    int i {1};
    while(balanceCleo <= balanceDaphne) {
        balanceDaphne += 0.1 * OriginalBalance;
        balanceCleo += 0.05 * balanceCleo;
        cout << i++ << " year. Balance Daphne: " << balanceDaphne
             << " Balance Cleo: " << balanceCleo << endl;
    }

    return 0;
}
