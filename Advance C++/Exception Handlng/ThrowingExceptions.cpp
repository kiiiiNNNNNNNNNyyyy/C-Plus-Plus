#include <iostream>
#include <stdexcept>

class DividedByZero : public std::runtime_error{
    public: 
        DividedByZero(): runtime_error("Divide by zero exception.") {};
};

double quotient(double num ,double deno){
    if(deno == 0){
        throw DividedByZero();
    }else{
        return num/deno;
    }
}

int main(){

    double number1, number2, ratio;
    std::cout << "Enter a numerator: ";
    std::cin >> number1;
    std::cout << "Enter a denominator: ";
    std::cin >> number2;
 
    try{
        ratio = quotient(number1, number2);
        std::cout << "Result is: " << ratio;
    
    }//catch(DividedByZero &except){
    //     std::cout << except.what() <<std::endl; // this returns the arguement that we mentioned in runtime_error.
    // }
    catch(...){
        std::cout << "Exception thrown and caught " << std::endl;   //use this catch All only if you dont know which exceptions are gonna occur
    }

    return 0;
}