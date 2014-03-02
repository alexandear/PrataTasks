#include <array>
#include <cstring>
#include <iostream>

const int strSize = 20;

struct bop {
    char fullName[strSize]; // real name
    char title[strSize];    // job title
    char bopName[strSize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main() {

    using namespace std;

    cout << "Benevolent Order of Programmer Report\n";
    cout << "a. display by name\tb. display by title\n";
    cout << "c. display by bopname\td. display by preference\n";
    cout << "q. quit\n";

    array <bop, 5> bops;

    strcpy(bops[0].fullName, "Wimp Macho");
    strcpy(bops[1].fullName, "Raki Rhodes");
    strcpy(bops[2].fullName, "Celia Laiter");
    strcpy(bops[3].fullName, "Hoppy Hipman");
    strcpy(bops[4].fullName, "Pat Hand");

    strcpy(bops[0].title, "Software architect");
    strcpy(bops[1].title, "Junior Programmer");
    strcpy(bops[2].title, "Middle Programmer");
    strcpy(bops[3].title, "Analyst Trainee");
    strcpy(bops[4].title, "Team Lead");

    strcpy(bops[0].bopName, "WIM");
    strcpy(bops[1].bopName, "RARHO");
    strcpy(bops[2].bopName, "MIPS");
    strcpy(bops[3].bopName, "HOPHIP");
    strcpy(bops[4].bopName, "LOOPY");

    bops[0].preference = 0;
    bops[1].preference = 1;
    bops[2].preference = 2;
    bops[3].preference = 1;
    bops[4].preference = 2;

    char ch {};
    cout << "Enter your choice: ";
    cin.get(ch).get();

    while (ch != 'q') {
        switch (ch) {
        case 'a':
            for (auto val : bops) {
                cout << val.fullName << endl;
            }
            break;
        case 'b':
            for (auto val : bops) {
                cout << val.title << endl;
            }
            break;
        case 'c':
            for (auto val : bops) {
                cout << val.bopName << endl;
            }
            break;
        case 'd':
            for (auto val : bops) {
                switch (val.preference) {
                case 0:
                    cout << val.fullName << endl;
                    break;
                case 1:
                    cout << val.title << endl;
                    break;
                case 2:
                    cout << val.bopName << endl;
                    break;
                }
            }
            break;
        }
        cout << "Next choice: ";
        cin.get(ch).get();
    };
    cout << "Bye!\n";

    return 0;
}
