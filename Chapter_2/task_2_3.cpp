#include <iostream>

void display1() {
    std::cout << "Three blind mice\n";
}

void display2() {
    std::cout << "See how they run\n";
}

int main() {

    using namespace std;

    display1();
    display1();
    display2();
    display2();

    return 0;
}

