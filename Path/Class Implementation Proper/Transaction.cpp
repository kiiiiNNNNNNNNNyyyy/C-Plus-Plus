#include "Transaction.h";

Transaction::Transaction(int amt, std::string kind):amount(amt), type(kind){}

std::string Transaction::report(){
    std:string report;
    report += " ";
    report += type;
    report += to_string(amount);

    return report;
}