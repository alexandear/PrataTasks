#include <iostream>
#include "person.h"

int main() {

    using std::cout;
    using std::endl;

    Person one; // use default constructor
    Person two("Smythecraft"); // use #2 with one default argument
    Person three("Dimwiddy", "Sam"); // use #2, no defaults

    Person * persons = new Person[3] {one, two, three};

    for (size_t i = 0; i < 3; ++i) {
        cout << "Person #" << i + 1 << ":\n";
        persons[i].Show();
        cout << endl;
        persons[i].FormalShow();
        cout << endl;
    }

    delete [] persons;

    return 0;
}
