#include <iostream>


const int DividedByZero = 1;
int main(){

    int number = 2;
    int denom = 0;

    try{
        if(denom == 0){
            throw DividedByZero;
        }else{
            std::cout << number / denom;   
        }
    }catch(int e){
        if(e == DividedByZero){
            std::cout << "Can't Divide by zero";
        }
    }

    // std::cout << number / denom; this thing will crash the program
    return 0; 
}