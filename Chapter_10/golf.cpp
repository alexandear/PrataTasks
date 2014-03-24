#include <cstring>
#include <iostream>
#include "golf.h"

// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
golf::golf(const char * name, int hc) {
    strcpy(fullname_, name);
    handicap_ = hc;
}

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int golf::setgolf() {
    using std::cin;
    using std::cout;

    char fname[StrSize] {};
    cout << "Enter name: ";
    cin.getline(fname, StrSize);
    int hc {};
    cout << "Enter handicap: ";
    cin >> hc;

    *this = golf(fname, hc);
    return strcmp(fname, "") ? 1 : 0;
}

// function resets handicap to new value
void golf::handicap(int hc) {
    handicap_ = hc;
}

// function displays contents of golf structure
void golf::showgolf() {
    std::cout << "Full name: " << fullname_ << std::endl;
    std::cout << "Handicap: " << handicap_ << std::endl;
}
