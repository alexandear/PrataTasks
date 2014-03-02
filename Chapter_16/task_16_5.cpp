#include <algorithm>
#include <iostream>
#include <vector>

template <class T>
int reduce(T ar[], int n);

int main() {

    long myarr[] = {10, 20, 20, 20, 30, 30, 0, 20, 10};
    std::cout << reduce<long>(myarr, 9);

    return 0;
}

template <class T>
int reduce(T ar[], int n) {
    std::vector<T> vect(ar, ar+n);
    std::sort(vect.begin(),vect.end());
    vect.erase(std::unique(vect.begin(), vect.end()), vect.end());
    return vect.size();
}
