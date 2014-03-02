#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {

    using namespace std;

    double total1, total2, choices;
    cout << "Enter the total number of choices on the game and\n"
            "the number of picks allowed and second range for mega number:\n";

    while ((cin >> total1 >> choices >> total2) && choices <= total1) {

        cout << "You have one chance in ";
        cout << probability(total1, choices) * probability(total2, 1); // compute the odds
        cout << " of winning.\n";
        cout << "Next three numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}
