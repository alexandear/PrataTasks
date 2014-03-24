#include <iostream>

const size_t Size {5};

template <typename T>
T max5(T arr[Size]);

int main() {

    using namespace std;

    int intArr[Size] {1, 4, -3, 6, 2};
    cout << "Max of int array: " << max5(intArr) << endl;

    double doubleArr[Size] {0.2, 5.1, -5.3, 2.9, 0.1};
    cout << "Max of double array: " << max5(doubleArr) << endl;

    return 0;
}

template <typename T>
T max5(T arr[Size]) {
    T max {arr[0]};
    for (size_t i = 0; i < Size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
