#include <fstream>
#include <iostream>

struct Contributor {
    char name[40];
    double amount;
};

int main() {

    using namespace std;

    fstream fin;
    const char filename[30] = "../Chapter_6/contributors.txt";
    fin.open(filename);
    if (!fin.is_open()) {
        cout << "Could not open the file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    int numberOfContributors {};
    fin >> numberOfContributors;

    Contributor *contributors = new Contributor[numberOfContributors];
    int i {};
    while(fin.good()) {
        fin.get();
        fin.getline(contributors[i].name, 40);
        fin >> contributors[i].amount;
        ++i;
    }

    if (numberOfContributors) {
        cout << "Number of contributors: " << numberOfContributors << endl;
        cout << "Grand Patrons:\n";
        for (int i = 0; i < numberOfContributors; ++i) {
            if (contributors[i].amount >= 10000.0) {
                cout << contributors[i].name << " " << contributors[i].amount << endl;
            }
        }

        cout << "\nPatrons:\n";
        for (int i = 0; i < numberOfContributors; ++i) {
            if (contributors[i].amount < 10000.0) {
                cout << contributors[i].name << " " << contributors[i].amount << endl;
            }
        }
    } else {
        cout << "none";
    }

    return 0;
}
