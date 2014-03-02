#include "sales.h"
#include <iostream>

SALES::Sales::Sales() {
    for (int i = 0; i < QUARTERS; ++i) {
        sales[i] = 0.0;
    }
    average = max = min = 0.0;
}

// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
SALES::Sales::Sales(const double ar[], int n) {
    int minQn {(QUARTERS < n) ? QUARTERS : n};
    for (int i = 0; i < QUARTERS; ++i) {
        if (i < minQn) {
            sales[i] = ar[i];
        } else {
            sales[i] = 0.0;
        }
    }
    min = sales[0];
    max = sales[0];
    double sum {};
    for (int i = 0; i < minQn; ++i) {
        if (sales[i] < min) {
            min = sales[i];
        }
        if (sales[i] > max) {
            max = sales[i];
        }
        sum += sales[i];
    }
    average = sum / minQn;
}


// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void SALES::Sales::setSales() {
    std::cout << "Enter sales:\n";
    double salesArr[QUARTERS] {};
    int i {};
    while(i < QUARTERS && std::cin >> salesArr[i] && ++i);
    *this = Sales(salesArr, QUARTERS);
}

// display all information in structure s
void SALES::Sales::showSales() const {
    using std::cout;
    using std::endl;
    cout << "Sales: ";
    for (int i = 0; i < QUARTERS; ++i) {
        cout << sales[i] << " ";
    }
    cout << "\nAverage: " << average << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}
