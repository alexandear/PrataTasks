#include <iostream>
#include "stock3.h"

const size_t Stks {4};

int main() {
    {
// create an array of initialized objects
    Stock stocks[Stks] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
        };

    std::cout << "Stock holdings:\n";
    size_t st;
    for (st = 0; st < Stks; st++)
        std::cout << stocks[st];
// set pointer to first element
    const Stock * top = &stocks[0];
    for (st = 1; st < Stks; st++)
        top = &top->topval(stocks[st]);
// now top points to the most valuable holding
    std::cout << "\nMost valuable holding:\n";
    std::cout << *top;
    }
    return 0; 
}
