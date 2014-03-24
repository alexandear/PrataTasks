#include <cstdlib>
#include <ctime>
#include <iostream>
#include "vect.h"

int main() {

    using namespace std;
    using VECTOR::Vector;

    srand(time(0));
    double direction {};
    Vector step {};
    Vector result(0.0, 0.0);
    unsigned long steps {};

    int trials {};
    cout << "Enter number of trials: ";
    if(!(cin >> trials)) {
        return 1;
    }

    double target {};
    cout << "Enter target distance: ";
    if (!(cin >> target))
        return 1;

    double dstep {};
    cout << "Enter step length: ";
    if (!(cin >> dstep))
        return 1;

    unsigned long *stepsArr = new unsigned long[trials];
    for (int n = 0; n < trials; ++n) {
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        stepsArr[n] = steps;
        steps = 0;
        result.reset(0.0, 0.0);
    }

    cout << "Number of steps:\n";
    unsigned long highest = stepsArr[0];
    unsigned long lowest = stepsArr[0];
    double sum {};
    for (int i = 0; i < trials; ++i) {
        if (stepsArr[i] > highest) {
            highest = stepsArr[i];
        }
        if (stepsArr[i] < lowest) {
            lowest = stepsArr[i];
        }
        sum += stepsArr[i];
    }
    double average {sum / trials};
    cout << "Highest: " << highest << "\nLowest: " << lowest << "\nAverage: " << average << endl;

    return 0; 
}
