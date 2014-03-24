#include <iostream>

int main() {

    using namespace std;

    cout << "Enter distance in furlongs: ";
    double furlong {};
    cin >> furlong;
    const int YardsInFurlong {220};
    cout << furlong << " furlongs = " <<  YardsInFurlong * furlong << " yards\n";
    return 0;
}

