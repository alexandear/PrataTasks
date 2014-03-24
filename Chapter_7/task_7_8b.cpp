#include <iostream>

const int Seasons {4};
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct Expenses {
    double * expenses;
};

void fill(Expenses * pa);
void show(const Expenses * da);

int main() {

    Expenses * exp = new Expenses;
    exp->expenses = new double[Seasons];
    fill(exp);
    show(exp);

    delete [] exp->expenses;
    delete exp;

    return 0;
}

void fill(Expenses * pa) {
    for (size_t i = 0; i < Seasons; i++) {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->expenses[i];
    }
}

void show(const Expenses * da) {
    double total {};
    std::cout << "\nEXPENSES\n";
    for (size_t i = 0; i < Seasons; i++) {
        std::cout << Snames[i] << ": $" << da->expenses[i] << std::endl;
        total += da->expenses[i];
    }
    std::cout << "Total: $" << total << std::endl;
}
