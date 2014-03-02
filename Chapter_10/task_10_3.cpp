#include <iostream>
#include "golf.h"

int main() {

    using std::cout;

    golf ann("Ann Birdfree", 24);
    ann.showgolf();

    golf andy("", 0);
    if (andy.setgolf()) {
        andy.showgolf();
    } else {
        cout << "Name is blank\n";
    }

    return 0;
}
