#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include "vect.h"

int main() {

    using namespace std;
    using VECTOR::Vector;

    srand(time(0));

    double direction {};
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps {};
    double target {};
    double dstep {};

    ofstream fout;
    const char * file {"../Chapter_11/randwalk.txt"};

    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        fout.open(file);
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        fout << "Target Distance: " << target << " , Step Size: " << dstep << endl;

        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            fout << steps++ << ": " << result << endl;
            result = result + step;
        }
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << result << endl;
        result.polar_mode();
        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        if (fout) {
            cout << "Succesfully write information to file: " << file << endl;
        }
        fout.close();
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";

    return 0; 
}
