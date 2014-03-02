#include "winei.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) :
    std::string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

Wine::Wine(const char * l, int y) :
    std::string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y))
{
}

void Wine::GetBottles() {
    std::cout << "Enter " << Label() << " data for " << years << " year (s):\n";
    for (int i = 0; i < years; ++i) {
        std::cout << "Enter year: ";
        std::cin >> PairArray::first()[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> PairArray::second()[i];
    }
}

void Wine::Show() {
    std::cout << "Wine: " << Label() << std::endl;
    std::cout << "\tYear\t" << "Bottles\n";
    for (int i = 0; i < years; ++i) {
        std::cout << "\t" << PairArray::first()[i] << "\t"
                  << PairArray::second()[i] << std::endl;
    }
}
