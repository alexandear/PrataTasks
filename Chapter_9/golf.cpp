#include <cstring>
#include <iostream>
#include "golf.h"

// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g) {
    using std::cin;
    using std::cout;
    cout << "Enter name: ";
    cin.getline(g.fullname, Len);
    cout << "Enter handicap: ";
    cin >> g.handicap;
    return strcmp(g.fullname, "") ? 1 : 0;
}

// function resets handicap to new value
void handicap(golf & g, int hc) {
    g.handicap = hc;
}

// function displays contents of golf structure
void showgolf(const golf & g) {
    std::cout << "Full name: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}
