#include <iostream>

int main() {

    using namespace std;

    cout << "What is your first name? ";
    char firstName[20] {};
    cin.getline(firstName, 20);

    cout << "What is your last name? ";
    char lastName[20] {};
    cin.getline(lastName, 20);

    cout << "What letter grade do you deserve? ";
    char grade {};
    cin.get(grade);

    cout << "What is your age? ";
    size_t age {};
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    (cout << "Grade: ").put(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
