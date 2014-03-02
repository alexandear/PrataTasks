#include <cstring>
#include <iostream>

int main() {

    using namespace std;

    const int nameSize = 20;

    cout << "Enter your first name: ";
    char firstName[nameSize] {};
    cin.getline(firstName, nameSize);

    cout << "Enter your last name: ";
    char lastName[nameSize] {};
    cin.getline(lastName, nameSize);

    char name[nameSize * 2 + 3] {};
    strcat(name, lastName);
    strcat(name, ", ");
    strcat(name, firstName);
    cout << "Here's the information in a single string: ";
    cout << name;

    return 0;
}
