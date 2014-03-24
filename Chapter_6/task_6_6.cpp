#include <iostream>
#include <string>

struct Contributor {
    std::string name;
    double amount;
};

int main() {

    using namespace std;

    cout << "Enter the number of contributors: ";
    size_t nContributors {};
    while (!(cin >> nContributors)) {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input. Please enter the number of contributors: ";
    }

    Contributor * contributors = new Contributor[nContributors];
    for (size_t i = 0; i < nContributors; ++i) {
        cout << "Enter the name of " << i + 1 << " contributor: ";
        cin >> contributors[i].name;
        cout << "Enter the amount of " << i + 1 << " contributor: ";
        (cin >> contributors[i].amount).get();
        cout << endl;
    }

    if (nContributors) {
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
    
    delete [] contributors;

    return 0;
}
