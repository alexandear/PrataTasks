#include <cstring>
#include <iostream>

void printString(const char * str, size_t n = 0);

int main() {

    using namespace std;

    const char * str {"String"};
    cout << "First call:\n";
    printString(str);
    cout << "Second call:\n";
    printString(str, 5);
    cout << "Third call:\n";
    printString(str, -1);
    cout << "Fourth call\n";
    printString(str, 9);

    return 0;
}


void printString(const char * str, size_t n) {
    static size_t calls = 1;
    if (n) {
        for (size_t i = 0; i < calls; ++i) {
            std::cout << str << std::endl;
        }
    } else {
        std::cout << str << std::endl;
    }
    ++calls;
}
