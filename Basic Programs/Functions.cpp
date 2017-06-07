#include <iostream>

bool check(std::string temp){
    bool isNumber = true;
    for(int i=0; i<temp.length(); i++){
        if(!(temp[i] >=48 && temp[i] <= 57)){
            isNumber = false;
            break;
        }
    }
    return isNumber;
}

//function overloading
bool check(std::string temp1, std::string temp2){
    bool isSame = false;
    if(temp1 == temp2){
        isSame = true;
    }
    return isSame;
}

main(){
    
    std::string temp;
    std::string temp2;

    std::cout << "Enter the number: " << std::endl;
    std::cin >> temp;

    if(check(temp))
        std::cout << "Number entered properly. " << std::endl;
    else
        std::cout << "Number not entered properly. " << std::endl;

    std::cout << "Let's compare your number." << std::endl;
    std::cout << "Enter your number : " <<  std::endl;
    std::cin >> temp2;

    if(check(temp, temp2))
        std::cout << "Same" << std::endl;
    else
        std::cout << "Not Same";
    
}