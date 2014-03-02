#include <iostream>

double fillArray (double *array, int size);
void showArray (const double *array, int size);
void reverseArray (double *array, int size);

int main() {

    using namespace std;

    const int Size = 5;
    double *array = new double[Size];
    int elements = fillArray(array, Size);

    std::cout << "\nArray:\n";
    showArray(array, elements);

    reverseArray(array, elements);
    cout << "\nReverse array:\n";
    showArray(array, elements);

    delete [] array;

    return 0;
}

double fillArray (double *array, int size) {
    std::cout << "Enter elements of the array. Enter number:\n";
    int i {};
    while (i < size && std::cin >> array[i]) {
        ++i;
        std::cout << "Next number:\n";
    }
    return i;
}

void showArray (const double *array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << std::endl;
    }
}

void reverseArray (double *array, int size) {
    for (int i = 0; i < size / 2; ++i) {
        std::swap(array[i], array[size - i - 1]);
    }
}
