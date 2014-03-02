#include <iostream>
#include "sales.h"

int main() {

    using namespace std;
    using namespace SALES;

    Sales s1, s2;
    double sales[] {1.0, 2.0, 3.0, 4.0};
    setSales(s1, sales, 3);
    showSales(s1);
    setSales(s2);
    showSales(s2);

    return 0;
}
