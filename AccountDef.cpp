#include "AccountClass.h"
#include <cstring>

float Account::Rate = 5.8;
int Account::count = 0;

Account::Account()
{
    std::cout << "Setup the Bank's account...\n";
    Balance = 0;
    Account::count++;
    std::cout << "You are not enter Back's account nickname yet, please enter it first...\n";
    return;
}

Account :: Account(const char Name[])
{
    strcpy(ID,Name);
    std::cout << "Setup the account for" << std::left << std::setw(8) << ID << std::endl;
    Balance = 0;
    Account::count++;
    std::cout << "Currently, " << std::setw(8) << ID << "Currently balance in account: " << Balance << "$\n"; 
    return;
}

Account :: Account(const char Name[], int N)
{
    strcpy(ID,Name);
    std::cout << "Setup the account for" << std::left << std::setw(8) << ID << std::endl;
    Balance = N;
    Account::count++;
    std::cout << "Currently, " << std::setw(8) << ID << "Currently balance in account: " << Balance << "$\n"; 
    return;
}

Account::~Account()
{
    std::cout << "delete Back's account for" << std::setw(8) << ID << std::endl;
    Account::count--;
    return;
}

void Account::WithDraw(int Cash)
{
    if (Cash > Balance){
        std::cerr << "The balence is not enough! " << std::setw(8) << ID << "You can not withdtawal this time.\n";
        return;
    }
    Balance -= Cash;
    std::cout << std::setw(8) << ID << "drawed " << Cash << "$, This account's balance is" << Balance << "$\n"; 
    return;
}

