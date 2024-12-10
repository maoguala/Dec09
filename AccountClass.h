#ifndef ACCOUNTCLASS_H
#define ACCOUNTCLASS_H
#include <iostream>
#include <iomanip>

class Account
{
    private:
    static float Rate;
    static int count;
    int Balance;
    char ID[20];
    public:
    Account();
    Account(const char[]);
    Account(const char[], int);
    ~Account();
    void Deposit(int);
    void WithDraw(int);
    void CheckBalance() const;
    void CheckRate() const
    {
        std::cout << "Currently Rate is: " << Rate << '%' << std::endl;
    }
    void CheckCount() const;
};

inline void Account::Deposit(int CashInput)
{
    Balance += CashInput;
    std::cout << std::setw(8) << ID << "Deposit" << CashInput << "$ ,Currently balance in account: ";
    return;    
}

inline void Account::CheckBalance() const
{
    std::cout << "Currently, " << std::setw(8) << ID << "Currently balance in account: " << Balance << "$\n";
    return;
}

inline void Account::CheckCount() const
{
    std::cout << "Currently, You HAVE " << count <<  " account(s) for bank.\n";
    return;
}
#endif