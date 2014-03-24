#include <iostream>

template <typename T>
T SumArray(T const arr[], size_t n);

template <typename T>
T SumArray(T * const arr[], size_t n);

struct debts {
    char name[50];
    double amount;
};

int main() {

    using std::cout;
    using std::endl;

    const size_t Things {6};
    int things[Things] {13, 31, 103, 301, 310, 130};

    const size_t Debts {3};
    debts mr_E[Debts] {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[Debts];
    for (size_t i = 0; i < Debts; i++) {
        pd[i] = &mr_E[i].amount;
    }

    cout << "Total number of Mr. E's things: " << SumArray(things, Things) << endl;
    cout << "All of Mr. E's debts: " << SumArray(pd, Debts) << endl;

    return 0;
}

template <typename T>
T SumArray(T const arr[], size_t n) {
    T sum {};
    for (size_t i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

template <typename T>
T SumArray(T * const  arr[], size_t n) {
    T sum {};
    for (size_t i = 0; i < n; i++) {
        sum += *arr[i];
    }
    return sum;
}
