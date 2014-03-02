#include <algorithm>
#include <iostream>
#include <vector>

int reduce(long ar[], int n);

int main() {

    long myarr[] = {10, 20, 20, 20, 30, 30, 0, 20, 10};
    std::cout << reduce(myarr, 9);

    return 0;
}

int reduce(long ar[], int n) {
    std::vector<long> vect(ar, ar+n);
    std::sort(vect.begin(),vect.end());
    vect.erase(std::unique(vect.begin(), vect.end()), vect.end());
    return vect.size();
}
