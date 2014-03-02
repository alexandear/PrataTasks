#include <cctype>
#include <iostream>
#include "stack.h"

int main() {

    using namespace std;
    
    const int Size = 3;
    Stack st1(Size);
    Item items[Size] {5L, 6L, 7L};
    for (int i = 0; i < Size; ++i) {
        st1.push(items[i]);
    }
    cout << boolalpha << "st1 is full: " << st1.isfull() << endl;

    Stack st2(st1);
    st2.pop(items[2]);
    cout << boolalpha << "st2(st1) and 1 pop is full: " << st2.isfull() << endl;

    Stack st3;
    st3 = st2;
    st3.push(items[0]);
    cout << boolalpha << "st3 = st2 and 1 push is empty: " << st3.isempty() << endl;

    return 0; 
}
