#include <iostream>

int main(){
    
    int a[3];
    a[0] = 100;
    a[1] = 200;
    a[2] = 400;
    short int zm;
    int lala = 6;
    int * const p = &a[0];    

    //all the lines below will give the same output which will the address of the pointer
    //a = &lala; we cannot run this line because its constant
    std::cout << &lala << std::endl;
    std::cout << a << std::endl;
    std::cout << p << std::endl;
    
    std::cout << &a[0] << std::endl;
    std::cout << &a[1] << std::endl;
    std::cout << &a[2] << std::endl;
    
    //the lines below will give the same output as the above three lines
    std::cout << a << std::endl;
    std::cout << a + 1 << std::endl;    //this means jump by 4 - depending on the datatype a++ will not work
    std::cout << a + 2 << std::endl;

    std::cout << *a  << std::endl;  //since a is address * will give the value at that address
    std::cout << *(a + 1) << std::endl;
    std::cout << *(a + 2) << std::endl;

    int * p2 = &a[0];
    std::cout << *p2 << std::endl;
    std::cout << ++*p2 << std::endl;    //will increase the =value its pointing to
    std::cout << *++p2 << std::endl;    //will increase the pointer value 
    std::cout << *p2++ << std::endl;    //will use the same value and then increment it
 
    return 0;
}