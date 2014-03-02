#include <iostream>
#include "stonewt6.h"

int main() {
    
    using std::cout;
    using std::cin;
    
    const int Size = 6;
    Stonewt stones[Size] {
        Stonewt(275),
        Stonewt(285.7, Stonewt::STONE),
        Stonewt(21, 8)
    };

    double pounds {};
    for (int i = 3; i < Size; ++i) {
        cout << "Enter pounds (" << i << "): ";
        cin >> pounds;
        stones[i] = pounds;
    }

    Stonewt min = stones[0];
    Stonewt max = stones[0];
    int greaterEqual{};
    Stonewt stn11(11, 0.0);
    for (int i = 0; i < Size; ++i) {
        if (stones[i] < min) {
            min = stones[i];
        }
        if (stones[i] > max) {
            max = stones[i];
        }
        if (stones[i] >= stn11) {
            ++greaterEqual;
        }
    }

    cout << "The smallest stone: " << min;
    cout << "The largest stone: " << max;
    cout << greaterEqual << " elements are greater or equal to 11 stone\n";

    return 0;
}
