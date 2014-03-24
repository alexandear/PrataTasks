#include <iostream>
#include "golf.h"

int main() {

    golf ann("Ann Birdfree", 24);
    ann.showgolf();

    golf andy("", 0);
    if (andy.setgolf()) {
        andy.showgolf();
    } else {
        std::cout << "Name is blank\n";
    }

    return 0;
}
