#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queuetp.h"

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    QueueTP<Worker *> lolas;
    Worker * worker;

    char choice {};
    cout << "Enter the employee category:\n"
         << "w: waiter s: singer "
         << "t: singing waiter q: quit\n";
    cin >> choice;
    while(choice != 'q' && !lolas.isfull()) {
        while (strchr("wstq", choice) == nullptr) {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        switch(choice) {
            case 'w':
                worker = new Waiter();
                break;
            case 's':
                worker = new Singer();
                break;
            case 't':
                worker = new SingingWaiter();
                break;
        }
        cin.get();
        worker->Set();
        lolas.enqueue(worker);
        cout << "Enter the employee category:\n"
             << "w: waiter s: singer "
             << "t: singing waiter q: quit\n";
        cin >> choice;
    }

    if (!lolas.isempty()) {
        cout << "\nHere is your staff:\n";
        while(!lolas.isempty()) {
            cout << endl;
            lolas.dequeue(worker);
            worker->Show();
        }
    }

    cout << "Bye.\n";
    return 0;
}
