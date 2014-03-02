#include <iostream>
#include "cow.h"

int main() {

    Cow cow1;
    cow1.ShowCow();
    Cow cow2("Cow 2", "hobby two", 15.5);
    cow2.ShowCow();
    Cow cow3;
    cow3 = cow2;
    cow3.ShowCow();
    Cow cow4(cow1);
    cow4.ShowCow();
    
    return 0;
}
