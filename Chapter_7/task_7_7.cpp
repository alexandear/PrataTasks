#include <iostream>

const size_t MaxSize {5};

double * fill_array(double * start, double * end);
void show_array(const double * start, const double * end);
void revalue(double r, double * start, double * end);

int main() {

    using namespace std;

    double properties[MaxSize];
    double * endProperties = fill_array(properties, properties + MaxSize);
    show_array(properties, endProperties);

    if (endProperties != properties) {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, endProperties);
        show_array(properties, endProperties);
    }
    cout << "Done.\n";

    return 0;
}

double * fill_array(double * start, double * end) {
    using std::cin;
    using std::cout;
    using std::endl;
    double temp {};
    size_t i {};
    while (start != end) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)
            break;
        *start = temp;
        ++start;
        ++i;
    }
    return start;
}

void show_array(const double * start, const double * end) {
    size_t i {};
    while (start != end) {
        std::cout << "Property #" << (i + 1) << ": $";
        std::cout << *start << std::endl;
        ++start;
        ++i;
    }
}

void revalue(double r, double * start, double * end) {
    while (start != end) {
        *start *= r;
        ++start;
    }
}
