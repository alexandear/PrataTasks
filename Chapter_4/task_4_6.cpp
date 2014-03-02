#include <iostream>

struct CandyBar {
    char name[20];
    double weight;
    size_t calories;
};

int main() {

    using namespace std;

    CandyBar snack[3] {
        {"Mocha Munch", 5.2, 7},
        {"Candy One", 19.1, 12},
        {"Cacao", 9.9, 2}
    };

    for (size_t i = 0; i < 3; ++i) {
        cout << "\nName: " << snack[i].name << endl;
        cout << "Weight: " << snack[i].weight << endl;
        cout << "Calories: " << snack[i].calories << endl;
    }

    return 0;
}
