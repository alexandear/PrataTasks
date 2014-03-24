#include <cctype>
#include <iostream>
#include "stack.h"

int main() {

    using std::cout;
    using std::cin;
    using std::endl;

    Stack st; // create an empty stack
    char ch {};
    customer cust;
    double total {};

    cout << "Please enter A to add a customer,\n"
        << "P to remove a customer, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }

        switch(ch) {
            case 'A':
            case 'a':
                cout << "Enter full name of customer: ";
                cin.getline(cust.fullname, 35);
                cout << "Enter customer's payment: ";
                cin >> cust.payment;
                if (st.isfull())
                    cout << "stack already full\n";
                else
                    st.push(cust);
             break;
             case 'P':
             case 'p':
                if (st.isempty())
                    cout << "stack already empty\n";
                 else {
                    st.pop(cust);
                    cout << "Customer " << cust.fullname << " removed\n";
                    total += cust.payment;
                    cout << "Total: " << total << endl;
                 }
             break;
        }
        cout << "Please enter A to add a customer,\n"
            << "P to remove a customer, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0; 
}
