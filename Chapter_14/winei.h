#ifndef WINEC_H_
#define WINEC_H_

#include <valarray>
#include <string>
#include "pair.h"

using ArrayInt = std::valarray<int>;
using PairArray = Pair<ArrayInt, ArrayInt>;

class Wine : std::string, PairArray {
    int years;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    void Show();
    std::string & Label() {
        return (std::string &) *this;
    }

    int sum() { return PairArray::second().sum(); }
};


#endif // WINEC_H_
