#include "AccountClass.h"

int main(){    
{ 
    std::cout << "\n(1)" << std::endl;
    Account John("John"), Katt("Katt");
    Account Bobb("Bobb", 123456);
    Bobb.CheckCount();
    Bobb.WithDraw(450);
    Katt.Deposit(5000);

    std::cout << "\n(2)\n";
    std::cout << "Size of Jhon is: " << sizeof(John) << std::endl;
    John.CheckBalance();
    Katt.CheckBalance();
    Bobb.CheckBalance();
    John.WithDraw(450);

    std::cout << "\n(3)\n";
    {
        Account Albert ("Albert" ,1200);
        Albert.CheckBalance();
        Albert.WithDraw(258);
        Albert.CheckBalance();
    }
    Katt.CheckCount();

    std::cout << "\n(4)\n";
    John.CheckRate();
}
    //system("pause");
    return 0;
}