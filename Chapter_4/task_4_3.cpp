#include <cstring>
#include <iostream>

int main() {

    using namespace std;

    const int NameSize {20};

    cout << "Enter your first name: ";
    char firstName[NameSize] {};
    cin.getline(firstName, NameSize);

    cout << "Enter your last name: ";
    char lastName[NameSize] {};
    cin.getline(lastName, NameSize);

    char name[NameSize * 2 + 3] {};
    strcat(name, lastName);
    strcat(name, ", ");
    strcat(name, firstName);
    cout << "Here's the information in a single string: " << name << endl;

    return 0;
}
