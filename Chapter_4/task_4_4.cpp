#include <iostream>
#include <string>

int main() {

    using namespace std;

    cout << "Enter your first name: ";
    string firstName {};
    getline(cin, firstName);

    cout << "Enter your last name: ";
    string lastName {};
    getline(cin, lastName);

    string name = firstName + ", " + lastName;
    cout << "Here's the information in a single string: ";
    cout << name;

    return 0;
}
