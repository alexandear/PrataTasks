#include <iostream>

const size_t Seasons {4};
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double * pa);
void show(const double * da);

int main() {

    double * expenses = new double[Seasons];
    fill(expenses);
    show(expenses);
    delete [] expenses;

    return 0;
}

void fill(double * pa) {
    for (size_t i = 0; i < Seasons; ++i) {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(const double * da) {
    double total {};
    std::cout << "\nEXPENSES\n";
    for (size_t i = 0; i < Seasons; ++i) {
        std::cout << Snames[i] << ": $" << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total: $" << total << std::endl;
}
