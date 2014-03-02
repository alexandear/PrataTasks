#include <iostream>

struct CandyBar {
    char name[20];
    double weight;
    size_t calories;
};

int main() {

    using namespace std;

    CandyBar snack {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Name: " << snack.name << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;

    return 0;
}
