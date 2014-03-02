#include <algorithm>
#include <iostream>
#include <fstream>
#include <set>
#include <string>

int main() {

    using namespace std;

    ifstream fin;
    fin.open("../Chapter_17/mat.dat");
    if(!fin.is_open()) {
        cerr << "Can't open Mat's friends' names" << endl;
        exit(EXIT_FAILURE);
    }

    set<string> friendsMat, friendsPat;
    string tmp;
    while(getline(fin, tmp))
        friendsMat.insert(tmp);

    fin.close();

    if (!friendsMat.empty()) {
        cout << "Mat's friends:\n";
        for (auto name : friendsMat)
            cout << name << endl;
    }

    fin.open("../Chapter_17/pat.dat");
    if(!fin.is_open()) {
        cerr << "Can't open Pat's friends' names" << endl;
        exit(EXIT_FAILURE);
    }
    while(getline(fin, tmp))
        friendsPat.insert(tmp);

    fin.close();

    if (!friendsPat.empty()) {
        cout << "\nPat's friends:\n";
        for (auto name : friendsPat)
            cout << name << endl;
    }

    if (!friendsMat.empty() || !friendsPat.empty()) {
        set<string> friends(friendsMat.begin(), friendsMat.end());
        copy(friendsPat.begin(), friendsPat.end(), inserter(friends, friends.end()));

        ofstream fout;
        fout.open("../Chapter_17/matnpat.dat");
        if (fout.is_open()) {
            for (auto name : friends)
                fout << name << endl;
        }
        fout.close();
    }

    return 0;
}
