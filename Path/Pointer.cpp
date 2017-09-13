#include <string>
#include <iostream>

int main(){

    int a=3;
    std::cout << "Value of a is : " << a << std::endl;
    int* pA = &a;
    *pA = 4;
    std::cout << "Value of a is : " << a << std::endl;
    int b = 100;
    pA = &b;
    (*pA)++;
    std::cout << "Value of a is : " << a << " and *pA is " << *pA << std::endl;

    // int* badPointer = nullptr;
    // if(badPointer){
    //     *badPointer = 3;
    //     std::cout << *badPointer << std::endl;
    // }

    //int& badReference; // you can do this, reference need to be assigned to something unlike pointer
        
    return 0;
}