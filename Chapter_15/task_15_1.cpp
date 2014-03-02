#include <iostream>
#include "tv.h"

int main() {

    using std::cout;

    Tv s42;
    s42.settings();

    Remote grey;
    cout << "\"grey\" mode:\n";
    grey.showmodenorm();

    s42.onoff();
    s42.settings();
    if (s42.set_modenorm(grey)) {
        cout << "\"grey\" mode after change:\n";
        grey.showmodenorm();
    } else {
        cout << "\"s42\" is off\n";
    }

    return 0;
}
