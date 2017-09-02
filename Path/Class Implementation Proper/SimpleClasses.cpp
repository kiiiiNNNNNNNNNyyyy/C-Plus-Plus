#include <iostream>
#include "Account.h";

int main(){

    Account a1;
    a1.deposit(920);
    std::cout << "After Depositing #920 " << std::endl;

    for(auto s:a1.report()){
        std::cout << s << std::endl;
    }

    a1.withdraw(50);

    if(a1.withdraw(100)){
        std::cout << "Second withdraw succeeds " << std::endl;
    }

    std::cout << "After withdrawing $50 then $100 " << std::endl;

    for(auto s: a1.report()){
        std::cout << s << endl;
    }

    return 0;
}