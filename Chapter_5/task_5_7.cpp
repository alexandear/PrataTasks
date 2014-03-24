#include <iostream>
#include <string>

struct Car {
    std::string make;
    int year;
};

int main() {

    using namespace std;

    cout << "How many cars do you wish to catalog? ";
    size_t numberOfCars {};
    (cin >> numberOfCars).get();

    Car * cars = new Car[numberOfCars];
    for (size_t i = 0; i < numberOfCars; ++i) {
        cout << "Car #" << ++i << ":\n";
        cout << "Please enter the make: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year made: ";
        (cin >> cars[i].year).get();
    }

    cout << "Here is your collection:\n";
    for (size_t i = 0; i < numberOfCars; ++i) {
        cout << cars[i].year << " " << cars[i].make << endl;
    }

    delete [] cars;

    return 0;
}
