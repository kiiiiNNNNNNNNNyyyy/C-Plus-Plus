#include <iostream>

/* referenced variable 
    Reference varuable must be initialized when created 
    Reference variable can change associations
    Reference variable must be the same type as the association
 */
int & swap(int &, int &);
int main(){

    std::string name = "Arjun";
    std::cout << "Value of variable: " << name << " " << &name << std::endl;
    std::string &ref = name;

    //If i use const it wont work, coz I am reinitializing at the bottom
    std::cout << "Value of variable: " << ref << " " << &ref << std::endl;

    ref = "Scot";
    std::cout << "Value of variable: " << name << " " << &name << std::endl;
    std::cout << "Value of variable: " << ref << " " << &ref << std::endl;

    int a = 10;
    int b = 20;

    std::cout << "address a : " << &a << std::endl;
    std::cout << "address b : " << &b << std::endl;
    
    //When to use reference variable
    int c = swap(a, b);
    int &address = swap(a, b);
    address = 100;  //this will change  the value of all the variable referred this address

    //instead of changind the variable we changed the address to which these variable are referred
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << "address : " << address << std::endl;  

    return 0;
}

int & swap(int &x, int & y){

    //if we dont use address the value of a and b will not be swapped globally
    std::cout << "address x: " << &x << std::endl;
    std::cout << "address y: " << &y << std::endl;

    int t;
    t = x;
    x = y;
    y = t;

    return x;
}