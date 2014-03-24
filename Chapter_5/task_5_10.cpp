#include <iostream>

int main() {

    using namespace std;

    cout << "Enter number of rows: ";
    size_t rows {};
    cin >> rows;

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < rows - i - 1; ++j) {
            cout << ".";
        }
        for (size_t k = 0; k < i + 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
