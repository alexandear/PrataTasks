#include <iostream>

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct Expenses {
    double *expenses;
};

void fill(Expenses *pa);
void show(const Expenses *da);


int main() {
    Expenses *exp;
    exp->expenses = new double[4];
    fill(exp);
    show(exp);
    delete exp;
    return 0;
}

void fill(Expenses *pa) {
    for (int i = 0; i < Seasons; i++) {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->expenses[i];
    }
}

void show(const Expenses *da) {
    double total {};
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++) {
        std::cout << Snames[i] << ": $" << da->expenses[i] << '\n';
        total += da->expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
