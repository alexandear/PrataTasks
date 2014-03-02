#include "sales.h"
#include <iostream>

// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void SALES::setSales(Sales & s, const double ar[], int n) {
    int min {(QUARTERS < n) ? QUARTERS : n};
    for (int i = 0; i < QUARTERS; ++i) {
        if (i < min) {
            s.sales[i] = ar[i];
        } else {
            s.sales[i] = 0;
        }
    }
    s.min = s.sales[0];
    s.max = s.sales[0];
    double sum {};
    for (int i = 0; i < min; ++i) {
        if (s.sales[i] < s.min) {
            s.min = s.sales[i];
        }
        if (s.sales[i] > s.max) {
            s.max = s.sales[i];
        }
        sum += s.sales[i];
    }
    s.average = sum / min;
}

// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void SALES::setSales(Sales & s) {
    std::cout << "Enter sales:\n";
    double sales[QUARTERS] {};
    int i {};
    while(i < QUARTERS && std::cin >> sales[i] && ++i);
    setSales(s, sales, QUARTERS);
}

// display all information in structure s
void SALES::showSales(const Sales & s) {
    std::cout << "Sales: ";
    for (int i = 0; i < QUARTERS; ++i) {
        std::cout << s.sales[i] << " ";
    }
    std::cout << "\nAverage: " << s.average << std::endl;
    std::cout << "Max: " << s.max << std::endl;
    std::cout << "Min: " << s.min << std::endl;
}
