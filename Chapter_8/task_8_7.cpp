#include <iostream>

template <typename T>            // template A
T SumArray(T arr[], int n);

template <typename T>            // template B
T SumArray(T * arr[], int n);

struct debts {
    char name[50];
    double amount;
};

int main() {

    using namespace std;

    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];


    for (int i = 0; i < 3; i++) {
        pd[i] = &mr_E[i].amount;
    }

    cout << "Total number of Mr. E's things: " << SumArray(things, 6) << endl;
    cout << "All of Mr. E's debts: " << SumArray(pd, 3) << endl;

    return 0;
}

template <typename T>
T SumArray(T arr[], int n) {
    T sum {};
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

template <typename T>
T SumArray(T * arr[], int n) {
    T sum {};
    for (int i = 0; i < n; i++) {
        sum += *arr[i];
    }
    return sum;
}
