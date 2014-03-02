#include <cstring>
#include <iostream>

struct CandyBar {
    char name[20];
    double weight;
    int calories;
};

void setCandyBar(CandyBar & candyBar, char * name = "Millenium Munch",
                  double weight = 2.85, int calories = 350);
void display(const CandyBar *candyBar);

int main() {

    using namespace std;

    CandyBar candyBar;
    setCandyBar(candyBar);
    display(&candyBar);

    return 0;
}

void setCandyBar (CandyBar & candyBar, char * name, double weight, int calories) {
    strcpy(candyBar.name, name);
    candyBar.weight = weight;
    candyBar.calories = calories;
}

void display(const CandyBar * candyBar) {
    std::cout << "Name: " << candyBar->name << std::endl;
    std::cout << "Weight: " << candyBar->weight << std::endl;
    std::cout << "Calories: " << candyBar->calories << std::endl;
}
