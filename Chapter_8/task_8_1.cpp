#include <cstring>
#include <iostream>

void printString(const char * str, int n = 0);

int main() {

    using namespace std;

    int cnt {};
    const char *str = "String";
    cout << "First call:\n";
    printString(str);
    cout << "Second call:\n";
    printString(str, 5);
    cout << "Third call:\n";
    printString(str, -1);
    cout << "Fourth call\n";
    printString(str, 9);
    delete [] str;

    return 0;
}


void printString(const char * str, int n) {
    static int calls = 1;
    if (n) {
        for (int i = 0; i < calls; ++i) {
            std::cout << str << std::endl;
        }
    } else {
        std::cout << str << std::endl;
    }
    ++calls;
}
