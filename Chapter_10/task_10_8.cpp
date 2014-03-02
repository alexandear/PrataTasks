#include <iostream>
#include "list.h"

void show(Item & item);

int main() {

    using std::cout;
    using std::endl;
    using std::boolalpha;

    List list;
    cout << boolalpha << "List is empty: " << list.isEmpty() << endl;
    list.add(5.5);
    cout << boolalpha << "Add element. List is empty: " << list.isEmpty() << endl;
    list.add(8.1);
    list.add(1.5);
    list.add(6.5);
    list.add(4.3);
    cout << boolalpha << "List is full: " << list.isFull() << endl;
    list.visit(show);

    return 0;
}

void show(Item & item) {
    std::cout << item << " ";
}
