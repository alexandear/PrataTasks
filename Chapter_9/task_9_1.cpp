#include <iostream>
#include "golf.h"

int main() {

    using namespace std;

    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    if (setgolf(andy)) {
        showgolf(andy);
    } else {
        cout << "Name is blank\n";
    }

    return 0;
}
