#include <cstring>
#include <iostream>

template <typename T>
T maxn(const T arr[], size_t n);

template <> char * maxn(char *const str[], size_t n);

int main() {

    using namespace std;

    const size_t IntSize {6};
    int intArr[6] {1, 4, -3, 6, 2, 8};
    cout << "Max of int array: " << maxn(intArr, IntSize) << endl;

    const size_t DoubleSize {4};
    double doubleArr[DoubleSize] {0.2, 5.1, -5.3, 2.9};
    cout << "Max of double array: " << maxn(doubleArr, DoubleSize) << endl;

    const size_t Days {5};
    char * days[Days] {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    char * longest = maxn(days, Days);
    cout << "Longest string: " << longest << endl;

    delete [] longest;

    return 0;
}

template <typename T>
T maxn(const T arr[], size_t n) {
    T max {arr[0]};
    for (size_t i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <> char * maxn(char *const str[], size_t n) {
    char * maxStr = str[0];
    for (size_t i = 0; i < n; ++i) {
        if (strlen(str[i]) > strlen(maxStr)) {
            maxStr = str[i];
        }
    }
    return maxStr;
}
