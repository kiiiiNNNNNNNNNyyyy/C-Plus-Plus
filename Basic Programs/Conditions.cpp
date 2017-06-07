#include <iostream>

main(){

    int a, b;
    
    std::cout << " Enter a : " << std::endl;
    std::cin >> a;

    std::cout << "Enter b : " << std::endl;
    std::cin >> b;

    if(a == b){
        std::cout << "a == b" << std::endl;
    }else if( a>b ){
        std::cout << "a > b" << std::endl;
    }else{
        std::cout << "a < b" << std::endl;
    }

    //SWITCH

    int x = 15;
    switch(x){
        case 0:     
            std::cout << "Executed. When switch value is 0" << std::endl; 
            break;
        case 15:
            std::cout << "Executed. When switch value is 15" << std::endl;
            break;
        case 26:
            std::cout << "Executed. When switch value is 26" << std::endl;
            break;
        default:
            std::cout << "this is the place which will be executed when value is not equal to any case" << std::endl;
            break;
    }

    char z = 100;
    switch(z){
        case 'd':     
            std::cout << "Executed. When switch value is d" << std::endl; //executed because character d is 100 ASCII
            break;
        case 15:
            std::cout << "Executed. When switch value is 15" << std::endl;
            break;
        case 26:
            std::cout << "Executed. When switch value is 26" << std::endl;
            break;
        default:
            std::cout << "this is the place which will be executed when value is not equal to any case" << std::endl;
            break;
    }

    //CONDITIONAL OPERATOR
    std::cout << "Conditional Operator" << std::endl;
    std::string message = (a > b) ? "a > b" : "a <= b";
    std::cout << message << std::endl;
    std::cout << ((a > b ? a : b) + 10) ;
    
}