#include <iostream>

/* referenced variable 
    Reference varuable must be initialized when created 
    Reference variable can change associations
 */

int main(){

    std::string name = "Arjun";
    std::cout << "Value of variable: " << name << " " << &name << std::endl;
    std::string &ref = name;
    std::cout << "Value of variable: " << ref << " " << &ref << std::endl;

    ref = "Scot";
    std::cout << "Value of variable: " << name << " " << &name << std::endl;
    std::cout << "Value of variable: " << ref << " " << &ref << std::endl;
    return 0;
}