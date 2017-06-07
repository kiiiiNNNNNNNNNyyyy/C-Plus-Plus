#include <iostream>

main(){

    int a = 10;
    int b = 15;

    std::cout << "a+b = " << a+b << std::endl;
    std::cout << "a-b = " << a-b << std::endl;
    std::cout << "a*b = " << a*b << std::endl;
    std::cout << "a/b = " << a/b << std::endl;  // result will always be integer, therefore zero
    std::cout << "b/a = " << b/a << std::endl; // Integer therefore 1
    std::cout << "a%b = " << a%b << std::endl;  //whatever the remainer is
    std::cout << "b%a = " << b%a << std::endl;

    int c = 1;
    c = c + 1;
    std::cout << "Value of c is : " << c << std::endl;

    c += 1; 
    std::cout << "Value of c is : " << c << std::endl;

    c++;    //POST-incrementation, will first use d, then d++
    std::cout << "Value of c is : " << c << std::endl;

    ++c;    //Pre-incrementation, will first increment, then use ++d value
    std::cout << "Value of c is : " << c << std::endl;

    //REALTOINAL OPERATORS

    std::cout << " Is a == b: " << (a == b) << std::endl; //O - because its false 
    std::cout << " Is a != b: " << (a != b) << std::endl; //1 - because its true 
    std::cout << " Is a > b: " << (a > b) << std::endl; //O - because its false 
    std::cout << " Is a < b: " << (a < b) << std::endl; //1 - because its true
    std::cout << " Is a >= b: " << (a >= b) << std::endl; //O - because its false  
    std::cout << " Is a <= b: " << (a <= b) << std::endl; //1 - because its true 

}