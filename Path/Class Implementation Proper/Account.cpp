#include "Account.h";

Account::Account(void):balance(0){}

std::vector<std::string> Account::report(){
    std::vector<std::string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for(auto t: log){
        report.push_back(t.report());
    }
    report.push_back("-------------------------");
    return report;
}

bool Account::deposit(int amt){
    if(amt >= 0){
        balance += amt;
        log.push_back(Transaction(amt, "Deposit"));
        return true;
    }else{
        return false;
    }
}

bool Account::withdraw(int amt){
    if(amt >= 0){
        if(balance >= amt){
            balance -= amt;
            log.push_back(Transaction(amt, "Withdraw"));
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}