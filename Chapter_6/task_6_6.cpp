#include <iostream>
#include <string>

struct Contributor {
    std::string name;
    double amount;
};

int main() {

    using namespace std;

    cout << "Enter the number of contributors: ";
    int numberOfContributors {};
    while (!(cin >> numberOfContributors)) {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input. Please enter the number of contributors:: ";
    }

    Contributor *contributors = new Contributor[numberOfContributors];
    for (int i = 0; i < numberOfContributors; ++i) {
        cout << "Enter the name of " << i + 1 << " contributor: ";
        cin >> contributors[i].name;
        cout << "Enter the amount of " << i + 1 << " contributor: ";
        (cin >> contributors[i].amount).get();
        cout << endl;
    }

    if (numberOfContributors) {
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
