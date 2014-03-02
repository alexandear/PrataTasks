#include <iostream>
#include "bankAccount.h"

BankAccount::BankAccount() {
    name_ = "no name";
    accountNumber_ = "--------";
    balance_ = 0.0;
}

BankAccount::BankAccount(const std::string &name, const std::string &accountNumber, double balance) {
    name_ = name;
    accountNumber_ = accountNumber;
    if (balance < 0.0) {
        std::cout << "Balance can't be negative; " << name << "'s balance set to 0.0.\n";
        balance_ = 0.0;
    } else {
        balance_ = balance;
    }
}

BankAccount::~BankAccount() { }

void BankAccount::show() const {
    using std::cout;
    using std::endl;
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Depositor's name: " << name_
              << "\nAccount number: " << accountNumber_
              << "\nBalance: $" << balance_ << endl;

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

void BankAccount::deposit(double money) {
    if (money < 0) {
        std::cout << "An amount of money can't be negative. Transaction is aborted.\n";
    } else {
        balance_ += money;
    }
}

void BankAccount::withdraw(double money) {
    if (money < 0) {
        std::cout << "An amount of money can't be negative. Transaction is aborted.\n";
    } else if (money > balance_){
        std::cout << "You can't withdraw more than you have! Transaction is aborted.\n";
    } else {
        balance_ -= money;
    }
}
