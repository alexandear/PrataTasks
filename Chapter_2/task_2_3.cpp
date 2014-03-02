#include <iostream>

void display1() {
    std::cout << "Three blind mice" << std::endl;
}

void display2() {
    std::cout << "See how they run" << std::endl;
}

int main() {

    using namespace std;

    display1();
    display1();
    display2();
    display2();

    return 0;
}

