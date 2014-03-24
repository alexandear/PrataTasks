#include <iostream>
#include <cstring>
#include "personmi.h"

int main() {
    using std::cout;
    using std::endl;
    using std::cin;

    const size_t Size {5};
    Person * people[Size] {};

    size_t ct {};
    for (ct = 0; ct < Size; ++ct) {
        char choice;
        cout << "Enter the person category:\n"
        << "g: gunslinger p: pokerplayer "
        << "d: bad dude q: quit\n";
        cin >> choice;
        while (strchr("gpdq", choice) == nullptr) {
            cout << "Please enter a g, p, d, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice) {
        case 'g':
            people[ct] = new Gunslinger;
            break;
        case 'p':
            people[ct] = new PokerPlayer;
            break;
        case 'd':
            people[ct] = new BadDude;
            break;
        }
        cin.get();
        people[ct]->Set();
    }

    cout << "\nHere is your people:\n";
    size_t i {};
    for (i = 0; i < ct; i++) {
        cout << endl;
        people[i]->Show();
    }

    for (i = 0; i < ct; i++)
        delete people[i];

    cout << "\nBye.\n";
    return 0;
}
