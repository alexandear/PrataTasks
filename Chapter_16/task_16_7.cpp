#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>
using std::vector;
using std::for_each;

vector<int> Lotto(int nSpots, int nSelected);

int main() {

    std::srand(static_cast<unsigned>(std::time(0)));

    vector<int> winners;
    winners = Lotto(51, 6);
    for_each(winners.begin(), winners.end(), [](int val){std::cout << val << " ";});

    return 0;
}

vector<int> Lotto(int nSpots, int nSelected) {

    vector<int> allValues(nSpots);
    for_each(allValues.begin(), allValues.end(),
                  [](int &val){ static int i = 1; val = i++;} );
    std::random_shuffle(allValues.begin(), allValues.end());
    std::sort(allValues.begin(), allValues.begin()+nSelected);

    return vector<int>(allValues.begin(), allValues.begin()+nSelected);
}
