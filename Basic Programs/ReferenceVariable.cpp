#include <iostream>

/* referenced variable 
    Reference varuable must be initialized when created 
    Reference variable can change associations
    Reference variable must be the same type as the association
 */

int main(){

    std::string name = "Arjun";
    std::cout << "Value of variable: " << name << " " << &name << std::endl;
    std::string &ref = name;

    //If i use const it wont work, coz I am reinitializing at the bottom
    std::cout << "Value of variable: " << ref << " " << &ref << std::endl;

    ref = "Scot";
    std::cout << "Value of variable: " << name << " " << &name << std::endl;
    std::cout << "Value of variable: " << ref << " " << &ref << std::endl;
    return 0;
}