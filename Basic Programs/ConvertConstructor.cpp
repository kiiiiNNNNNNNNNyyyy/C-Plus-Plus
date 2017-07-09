#include <iostream>
#include "Integer.h"
int main(){

    Integer x(50);
    int b = x;  //both will work fine, it we are using operators
    x = 100;
    // std::string text1 = "lala";
    // std::string text2 = "second string " + text1;   //this wont concatenate the strings

    x += b;
    std::cout << x.getNumber() << std::endl;
    std::cout << b << std::endl;
    std::cout << x + b << std::endl;

    return 0;

}