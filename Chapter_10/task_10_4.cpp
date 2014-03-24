#include "sales.h"

int main() {

    using namespace SALES;

    double sales[] {1.0, 2.0, 3.0, 4.0};
    Sales s1(sales, 3);
    s1.showSales();

    Sales s2;
    s2.setSales();
    s2.showSales();

    return 0;
}
