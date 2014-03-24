#ifndef SALES_H_
#define SALES_H_
#include <iostream>

namespace SALES {

    class Sales {
    
        const size_t static Quarters {4};
        double sales[Quarters];
        double average;
        double max;
        double min;
        
    public:
        Sales();

        // copies the lesser of 4 or n items from the array ar
        // to the sales member of s and computes and stores the
        // average, maximum, and minimum values of the entered items;
        // remaining elements of sales, if any, set to 0
        Sales(const double ar[], size_t n);

        // gathers sales for 4 quarters interactively, stores them
        // in the sales member of s and computes and stores the
        // average, maximum, and minimum values
        void setSales();

        // display all information in structure s
        void showSales() const;

    };    
}

#endif
