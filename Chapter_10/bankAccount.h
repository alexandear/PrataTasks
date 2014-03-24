#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>

class BankAccount {
    std::string name_;
    std::string accountNumber_;
    double balance_;
public:
    BankAccount();
    BankAccount(const std::string &name, const std::string & accountNumber,
                double balance = 0.0);
    ~BankAccount();

    void show() const;
    void deposit(double money);
    void withdraw(double money);
};

#endif // BANKACCOUNT_H_
