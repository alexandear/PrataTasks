#include "winec.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) :
    name(std::string(l)), years(y)
{
    yearsBottlesPair = PairArray(ArrayInt(yr, y), ArrayInt(bot, y));
}

Wine::Wine(const char * l, int y) :
    name(std::string(l)), years(y)
{
    yearsBottlesPair = PairArray(ArrayInt(y), ArrayInt(y));
}

void Wine::GetBottles() {
    std::cout << "Enter " << Label() << " data for " << years << " year (s):\n";
    for (int i = 0; i < years; ++i) {
        std::cout << "Enter year: ";
        std::cin >> yearsBottlesPair.first()[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> yearsBottlesPair.second()[i];
    }
}

void Wine::Show() {
    std::cout << "Wine: " << Label() << std::endl;
    std::cout << "\tYear\t" << "Bottles\n";
    for (int i = 0; i < years; ++i) {
        std::cout << "\t" << yearsBottlesPair.first()[i] << "\t"
                  << yearsBottlesPair.second()[i] << std::endl;
    }
}
