#include <iostream>
#include "stonewt.h"

int main() {

    using std::cout;

    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    cout << incognito;
    cout << "The detective weighed ";
    cout << wolfe;
    cout << "The President weighed ";
    cout << taft;
    cout << "celebrity + detective: " << incognito + wolfe;

    Stonewt diff = taft - wolfe;
    diff.setMode(Stonewt::STONE);
    cout << "President - detective: " << diff;

    cout << "President * celebrity: " << taft * incognito;
    return 0;
}
