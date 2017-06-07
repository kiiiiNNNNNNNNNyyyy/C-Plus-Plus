#include <iostream>

main(){

    double var1, var2;

    beginning:
    std::cout << "Enter 1st number: " << std::endl;
    std::cin >> var1;

    std::cout << "Enter 2nd Number: " << std::endl;
    std::cin >> var2;

    std::cout << "What do ou wanna do ? " << std::endl;
    std::cout << "+ - Addition." << std::endl;
    std::cout << "- - Subtraction." << std::endl;
    std::cout << "* - Multiplication." << std::endl;
    std::cout << "/ - Division." << std::endl;

    char decision;
    std::cin >> decision;

    switch(decision){
        case '+': 
            std::cout << var1 + var2 << std::endl;
            break;
        case '-':
            std::cout << var1 - var2 << std::endl; 
            break;
        case '/':
            if(var2 != 0)
                std::cout << var1 / var2 << std::endl; 
            else
                std::cout << "You cannot divide by 0." << std::endl;
            break;
        case '*':
            std::cout << var1 * var2 << std::endl;
            break;
        default :
            std::cout << "Invalid Input!!" << std::endl; 
            break;
    }

    char decision2;
    std::cout << "Do you wanna continue? (y/n)" << std::endl;
    std::cin >> decision2;

    if(decision2 == 'y' || decision2 == 'Y'){
        goto beginning;
    }

}