#include <iostream>
#include "winec.h"

int main() {

    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50] {};
    cin.getline(lab, 50);
    cout << "Enter number of years: ";
    int yrs {};
    cin >> yrs;

    Wine holding(lab, yrs); // store label, years, give arrays yrs elements
    holding.GetBottles(); // solicit input for year, bottle count
    holding.Show(); // display object contents

    const int Years {3};
    int y[Years] = {1993, 1995, 1998};
    int b[Years] = { 48, 60, 72};
    // create new object, initialize using data in arrays y and b
    Wine more("Gushing Grape Red", Years, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label() // use Label() method
        << ": " << more.sum() << endl; // use sum() method
    cout << "Bye\n";

    return 0;
}

