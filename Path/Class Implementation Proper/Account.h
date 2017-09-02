#include <vector>
#include <string>
#include "Transaction.h"

// never use namespace in a header file 

class Account{
    private:
        int balance;
        std::vector<Transaction> log;
    
    public: 
        Account();
        std::vector<std::string> report();
        bool deposit(int amt);
        bool withdraw(int amt);
};
