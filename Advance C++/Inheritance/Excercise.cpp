#include <iostream>

class Account{
    protected:
        double balance;

    public:
        Account(double bal){
            if(bal > 0){
                balance = bal;
            }else{
                bal = 0.0;
            }
        }

        void credit(double amount){
            balance += amount;
        }

        void debit(double amount){
            if(balance > amount){
                balance = balance - amount;
            }else{
                std::cout << "Insufficient funds!!" << std::endl;
            }
        }

        double getBalance(){
            return balance;
        }
};

class CheckingAccount : public Account{

    //benifit is that we dont have to define the same getDebit and getCredit function
    // as we are getting them from the base class
    private:
        double fee;

    public: 
        CheckingAccount(double bal, double f) : Account(bal){
            fee = f ;
        }

        void debit(double amount){
            if(balance > amount){
                balance = balance - amount - fee;
            }else{
                std::cout << "Insufficient funds!!" << std::endl;
            }
        }
};

int main(){

    CheckingAccount myAccount(500, 0.5);
    myAccount.credit(100);
    std::cout << myAccount.getBalance() << std::endl;
    myAccount.debit(50);
    std::cout << myAccount.getBalance() << std::endl ;

    return 0; 
}