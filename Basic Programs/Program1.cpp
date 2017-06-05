#include <iostream>

main(){

    int a = 4;
    std::cout<<"Hey !! hwat is up!!" << a << std::endl; //allocating space in memory = 4 bits
    std::cout << "Getting address of the variale: " << &a << std::endl;
    a = 10;
    std::cout << "Value of a: " << a << " and adress is still same: " << &a;

    /*
        variables cannot have the same name
        variables cannot start with a number 
        we cannot use space in variables name
        variable should be self-descriptive
        variables cannot have special characters keywords
        variables should be nouns
    */

}

