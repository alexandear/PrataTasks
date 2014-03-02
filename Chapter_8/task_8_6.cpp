#include <cstring>
#include <iostream>

template <typename T>
T maxn(T arr[], int n);

template <> char * maxn(char * str[], int n);

int main() {

    using namespace std;

    int intArr[6] {1, 4, -3, 6, 2, 8};
    cout << "Max of int array: " << maxn(intArr, (sizeof intArr / sizeof(int))) << endl;

    double doubleArr[4] {0.2, 5.1, -5.3, 2.9};
    cout << "Max of double array: " << maxn(doubleArr, (sizeof doubleArr / sizeof(double))) << endl;

    char * days[5] {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    char * longest = maxn(days, (sizeof days / sizeof(char *)));
    cout << "Longest string: " << longest << endl;

    delete [] longest;

    return 0;
}

template <typename T>
T maxn(T arr[], int n) {
    T max {arr[0]};
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <> char * maxn(char * str[], int n) {
    char * maxStr = str[n - 1];
    for (int i = 0; i < n; ++i) {
        if (strlen(str[i]) > strlen(maxStr)) {
            maxStr = str[i];
        }
    }
    return maxStr;
}
