#include <iostream>
#include "golf.h"

int main() {

    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    if (setgolf(andy)) {
        showgolf(andy);
    } else {
        std::cout << "Name is blank\n";
    }

    return 0;
}
