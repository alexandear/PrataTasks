#include <iostream>

int main() {

    using namespace std;

    cout << "Enter the world's population: ";
    long long worldPopulation {};
    cin >> worldPopulation;

    cout << "Enter the population of US: ";
    long long populationOfTheUs {};
    cin >> populationOfTheUs;

    cout << "The population of the US is " << populationOfTheUs * 100.0 / worldPopulation << "% of the world population.";

    return 0;
}
