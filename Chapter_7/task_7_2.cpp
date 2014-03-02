#include <iostream>

double* input (int &numberOfScores);
void show (const double *golfScores, int numberOfScores);
double average (const double *golfScores, int numberOfScores);

int main() {

    using namespace std;

    double *golfScores = new double[10];
    int numberOfScores {};
    golfScores = input(numberOfScores);
    show(golfScores, numberOfScores);
    cout << "Average of scores: " << average(golfScores, numberOfScores) << endl;

    delete [] golfScores;

    return 0;
}


double* input (int &numberOfScores) {
    double *golfScores = new double[10];
    std::cout << "Enter up to 10 golf scores (q to quit):\n";
    int i {};
    while (i < 10 && std::cin >> golfScores[i] && std::cin.get() != 'q') {
        ++i;
    }
    numberOfScores = i;

    return golfScores;
}

void show (const double *golfScores, int numberOfScores) {
    std::cout << "All the scores: ";
    for (int i = 0; i < numberOfScores; ++i) {
        std::cout << golfScores[i] << " ";
    }
    std::cout << (numberOfScores ? "" : "list empty") << std::endl;
}

double average (const double *golfScores, int numberOfScores) {
    double sum {};
    for (int i = 0; i < numberOfScores; ++i) {
        sum += golfScores[i];
    }
    return numberOfScores ? sum / numberOfScores : 0.0;
}
