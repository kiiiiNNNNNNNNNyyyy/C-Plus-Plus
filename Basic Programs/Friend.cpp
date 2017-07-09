#include <iostream>
#include "FriendClasses.h"

int main(){
    
    B objB;
    std::cout << objB.getSecretValue() << std::endl;
    A objA;
    objA.setSecretValue(objB, 600);
    std::cout << objB.getSecretValue() << std::endl;

    return 0;

}