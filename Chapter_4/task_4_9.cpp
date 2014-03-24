#include <cstring>
#include <iostream>

struct CandyBar {
    char name[20];
    double weight;
    size_t calories;
};

int main() {

    using namespace std;

    const size_t Size {3};
    CandyBar * snack = new CandyBar[Size];

    strcpy(snack[0].name, "Mocha Munch");
    snack[0].weight = 5.2;
    snack[0].calories = 7;

    strcpy((snack + 1)->name, "Candy One");
    snack[1].weight = 19.1;
    snack[1].calories = 12;

    strcpy(snack[2].name, "Cacao");
    snack[2].weight = 9.9;
    snack[2].calories = 2;

    cout << endl;
    for (size_t i = 0; i < Size; ++i) {
        cout << "Name: " << snack[i].name << endl;
        cout << "Weight: " << snack[i].weight << endl;
        cout << "Calories: " << snack[i].calories << endl;
    }

    delete [] snack;

    return 0;
}
