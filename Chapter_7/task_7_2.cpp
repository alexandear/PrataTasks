#include <iostream>

const size_t MaxScores {10};

double * input (size_t & nScores);
void show (const double * golfScores, size_t nScores);
double average (const double * golfScores, size_t nScores);

int main() {

    double * golfScores = new double[MaxScores];
    size_t nScores {};
    golfScores = input(nScores);
    show(golfScores, nScores);
    std::cout << "Average of scores: " << average(golfScores, nScores) << std::endl;

    delete [] golfScores;

    return 0;
}

double * input (size_t & nScores) {
    double * golfScores = new double[MaxScores];
    std::cout << "Enter up to 10 golf scores (q to quit):\n";
    size_t i {};
    while (i < 10 && std::cin >> golfScores[i] && std::cin.get() != 'q') {
        ++i;
    }
    nScores = i;

    return golfScores;
}

void show (const double * golfScores, size_t nScores) {
    std::cout << "All the scores: ";
    for (size_t i = 0; i < nScores; ++i) {
        std::cout << golfScores[i] << " ";
    }
    std::cout << (nScores ? "" : "list empty") << std::endl;
}

double average (const double * golfScores, size_t nScores) {
    double sum {};
    for (size_t i = 0; i < nScores; ++i) {
        sum += golfScores[i];
    }
    return nScores ? sum / nScores : 0.0;
}
