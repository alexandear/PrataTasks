#include <fstream>
#include <iostream>

const size_t StrSize {40};

struct Contributor {
    char name[40];
    double amount;
};

int main() {

    using namespace std;

    fstream fin;
    const char filename[StrSize] {"../Chapter_6/contributors.txt"};
    fin.open(filename);
    if (!fin.is_open()) {
        cout << "Could not open the file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    size_t nContributors {};
    fin >> nContributors;

    Contributor * contributors = new Contributor[nContributors];
    size_t i {};
    while(fin.good()) {
        fin.get();
        fin.getline(contributors[i].name, StrSize);
        fin >> contributors[i].amount;
        ++i;
    }

    if (nContributors) {
        cout << "Number of contributors: " << nContributors << endl;
        cout << "Grand Patrons:\n";
        for (size_t i = 0; i < nContributors; ++i) {
            if (contributors[i].amount >= 10000.0) {
                cout << contributors[i].name << " " << contributors[i].amount << endl;
            }
        }
        cout << endl;

        cout << "Patrons:\n";
        for (size_t i = 0; i < nContributors; ++i) {
            if (contributors[i].amount < 10000.0) {
                cout << contributors[i].name << " " << contributors[i].amount << endl;
            }
        }
        cout << endl;
    } else {
        cout << "none\n";
    }

    return 0;
}
