#include <iostream>
#include "bankAccount.h"

int main() {

    using std::cout;

    const int Size = 4;
    BankAccount none;
    none.show();

    BankAccount array[Size] = {
        BankAccount("Mint", "LE1021", 140.33 ),
        BankAccount("O'Dweeb", "AA0001"),
        BankAccount {"Le Peu", "BK0232", 500.2},
        BankAccount {"Biggens", "SD0503", 800.993}
    };

    cout << "\nBank accounts:\n";
    for (int i = 0; i < Size; ++i) {
        array[i].show();
    }

    array[0].withdraw(600.312);

    array[1].deposit(7000.12);
    array[1].show();

    array[2].withdraw(-123.2);

    array[3].withdraw(10.51);
    array[3].show();

    return 0;
}
