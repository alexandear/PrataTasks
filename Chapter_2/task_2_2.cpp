#include <iostream>

int main() {

    using namespace std;

    cout << "Enter distance in furlongs: ";
    auto furlong = 0.0;
    cin >> furlong;
    cout << furlong << " furlongs = " <<  220 * furlong << " yards" << endl;
    return 0;
}

