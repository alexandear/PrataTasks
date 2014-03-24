#include <iostream>

size_t fillArray (double * array, size_t size);
void showArray (const double * array, size_t size);
void reverseArray (double * array, size_t size);

int main() {

    const size_t Size {5};
    double * array = new double[Size];
    size_t elements {fillArray(array, Size)};

    std::cout << "\nArray:\n";
    showArray(array, elements);

    reverseArray(array, elements);
    std::cout << "\nReverse array:\n";
    showArray(array, elements);

    delete [] array;

    return 0;
}

size_t fillArray (double * array, size_t size) {
    std::cout << "Enter elements of the array. Enter number:\n";
    size_t i {};
    while (i < size && std::cin >> array[i]) {
        ++i;
        std::cout << "Next number:\n";
    }
    return i;
}

void showArray (const double * array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << array[i] << std::endl;
    }
}

void reverseArray (double * array, size_t size) {
    for (size_t i = 0; i < size / 2; ++i) {
        std::swap(array[i], array[size - i - 1]);
    }
}
