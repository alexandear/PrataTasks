#include <iostream>

const int Max = 5;

double* fill_array(double *start, double *end);
void show_array(const double *start, const double *end);
void revalue(double r, double *start, double *end);

int main() {

    using namespace std;

    double properties[Max];
    double *endProperties = fill_array(properties, properties + Max);
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

double* fill_array(double *start, double *end) {
    using namespace std;
    double temp {};
    int i {};
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

void show_array(const double *start, const double *end) {
    using namespace std;
    int i {};
    while (start != end) {
        cout << "Property #" << (i + 1) << ": $";
        cout << *start << endl;
        ++start;
        ++i;
    }
}

void revalue(double r, double *start, double *end) {
    while (start != end) {
        *start *= r;
        ++start;
    }
}
