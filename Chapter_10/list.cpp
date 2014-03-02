#include <iostream>
#include "list.h"

List::List(){
    top = 0;
}

bool List::add(Item && item) {
    if (!isFull()) {
        items[top++] = item;
        return true;
    } else {
        std::cout << "List is full. Can't add item.\n";
        return false;
    }
}

bool List::isEmpty() const {
    return !top;
}

bool List::isFull() const {
    return top == MaxItems;
}

void List::visit(void (*pf)(Item & item)) {
    for (int i = 0; i < top; ++i) {
        (*pf)(items[i]);
    }
}
