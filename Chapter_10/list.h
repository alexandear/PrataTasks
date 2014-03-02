#ifndef LIST_H_
#define LIST_H_

#define Item double

class List {
    const static int MaxItems = 5;
    Item items[MaxItems];
    int top;
public:
    List();
    bool add(Item && item);
    bool isEmpty() const;
    bool isFull() const;
    void visit(void (*pf)(Item & item));
};

#endif // LIST_H_
