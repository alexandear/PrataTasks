#ifndef WINEC_H_
#define WINEC_H_

#include <valarray>
#include <string>
#include "pair.h"

class Wine {
public:
    using ArrayInt = std::valarray<int>;
    using PairArray = Pair<ArrayInt, ArrayInt>;
private:
    std::string name;
    int years;
    PairArray yearsBottlesPair;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    void Show();
    std::string & Label() { return name; }
    int sum() { return yearsBottlesPair.second().sum(); }
};


#endif // WINEC_H_
