#include <cstring>
#include <iostream>
using namespace std;


struct stringy {
    char * str;     // points to a string
    int ct;         // length of string (not counting '\0')
};

void set(stringy & beany, const char * str);
void show(const stringy & beany, size_t n = 1);
void show(const char * str, size_t n = 1);

int main() {

    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing); // first argument is a reference,
            // allocates space to hold copy of testing,
            // sets str member of beany to point to the
            // new block, copies testing to new block,
            // and sets ct member of beany
    show(beany); // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing); // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    delete [] beany.str;
    
    return 0;
}

void set(stringy & beany, const char * str) {
    beany.str = new char[strlen(str)];
    strcpy(beany.str, str);
    beany.ct = strlen(str);
}

void show(const stringy &beany, size_t n) {
    for (size_t i = 0; i < n; i++) {
        cout << beany.str << endl;
    }
}

void show(const char * str, size_t n) {
    for (size_t i = 0; i < n; i++) {
        cout << str << endl;
    }
}
