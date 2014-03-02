#include <iostream>
#include <string>

struct Pizza {
    std::string name;
    double diameter;
    double weight;
};

int main() {

    using namespace std;
    Pizza *havaiska = new Pizza;

    cout << "Enter the name of the pizza company: ";
    getline(cin, havaiska->name);

    cout << "Enter the diameter of the pizza: ";
    cin >> havaiska->diameter;

    cout << "Enter the weight of the pizza: ";
    cin >> havaiska->weight;

    cout << "\nHavaiska pizza: " << endl;
    cout << "Name: " << havaiska->name << endl;
    cout << "Diameter: " << havaiska->diameter << endl;
    cout << "Weight: " << havaiska->weight << endl;

    return 0;
}
