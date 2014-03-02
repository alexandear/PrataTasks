#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename Item>
class QueueTP {
    // Node is a nested structure definition local to this class
    struct Node { Item item; struct Node * next;};
    enum {Q_SIZE = 10};
// private class members
    Node * front;       // pointer to front of Queue
    Node * rear;        // pointer to rear of Queue
    int items;          // current number of items in Queue
    const int qsize;    // maximum number of items in Queue
    // preemptive definitions to prevent public copying
    QueueTP(const QueueTP & q) : qsize(0) { }
    QueueTP & operator=(const QueueTP & q) { return *this;}
public:
    QueueTP(int qs = Q_SIZE);     // create queue with a qs limit
    ~QueueTP();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item); // add item to end
    bool dequeue(Item &item);       // remove item from front
};


template<typename Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs) {
    front = rear = nullptr;
    items = 0;
}

template<typename Item>
QueueTP<Item>::~QueueTP() {
    Node * temp;
    while (front != nullptr) {  // while QueueTP is not yet empty
        temp = front;           // save address of front item
        front = front->next;    // reset pointer to next item
        delete temp;            // delete former front
    }
}

template<typename Item>
bool QueueTP<Item>::isempty() const {
    return items == 0;
}

template<typename Item>
bool QueueTP<Item>::isfull() const {
    return items == qsize;
}

template<typename Item>
int QueueTP<Item>::queuecount() const {
    return items;
}

// Add item to queue
template<typename Item>
bool QueueTP<Item>::enqueue(const Item & item) {
    if (isfull())
        return false;
    Node * add = new Node;  // create node
// on failure, new throws std::bad_alloc exception
    add->item = item;       // set node pointers
    add->next = nullptr;
    items++;
    if (front == nullptr)   // if queue is empty,
        front = add;        // place item at front
    else
        rear->next = add;   // else place at rear
    rear = add;             // have rear point to new node
    return true;
}

// Place front item into item variable and remove from queue
template<typename Item>
bool QueueTP<Item>::dequeue(Item & item) {
    if (front == NULL)
        return false;
    item = front->item;     // set item to first item in queue
    items--;
    Node * temp = front;    // save location of first item
    front = front->next;    // reset front to next item
    delete temp;            // delete former first item
    if (items == 0)
        rear = nullptr;
    return true;
}

#endif // QUEUETP_H_
