#include <iostream>

int factorial(int number){
    if(number>1){
        return number * factorial(number - 1);
    }else{
        return 1;
    }
}

int fibonacci(int number){
    if(number > 1){
        return fibonacci(number - 1) + fibonacci(number-2);
    }else{
        return 1;
    }
    return number;
}

int main(){
    std::cout << factorial(5) << std::endl;
    std::cout << fibonacci(10);
    return 0;
}