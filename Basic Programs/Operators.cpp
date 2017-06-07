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

    //LOGICAL OPERATORS

    std::cout << "Is (7 > 5 && 5 !=10) = " <<  (7 > 5 && 5 !=10) << std::endl;
    std::cout << "Is (7 > 5 || 5 ==10) = " <<  (7 < 5 || 5 ==10) << std::endl;

    //BITWISE OPERATORS

    /*
        126 = (1 * 10 ^ 2)  + (2 * 10 ^ 1) + (6 * 10 ^ 0) = 126
        1010 = (1 * 2 ^ 3) + (0 * 2 ^ 2) + (1 * 2 ^ 1) + (0 * 2 ^ 0) = 8 + 0 + 2 + 0 = 10 
        101100 = (1 * 2 ^ 5) + (1 * 2 ^ 3) + (1 * 2 ^ 2) = 32 + 8 + 4 = 44

        Bitwise AND - &
        Bitwise OR - ||
        Bitwise NOT - ~ (tilde)
        Bitwise XOR - ^ (caret)
        XOR - 00 = 0, 01 = 1, 10 = 1, 11 = 0
        Bitwise left shift <<
        Bitwise right shift >>

    */

    std::cout << (10 & 2) << std::endl;
    /*
        1 0 1 0
        0 0 1 0
        -------
        0 0 1 0 === 2
        -------
    */
    std::cout << (10 | 2) << std::endl;
    std::cout << (~10) << std::endl;
    std::cout << (10 ^ 2) << std::endl;
    std::cout << (10 << 1) << std::endl;
    std::cout << (10 << 3) << std::endl;
    /* 
        000000000000000000 1010 = 1010
        000000000000000001 0100 = 10100 = 20
        000000000000000101 0000 = 1010000 = 64 + 16 = 80
    */
    std::cout << (10 >> 1) << std::endl;
    std::cout << (10 >> 3) << std::endl;
    /*
        000000000000000000 1010 = 1010
        000000000000000000 0101 = 0101 = 4 + 1 = 5  
        000000000000000000 0001 = 0001 = 1
    */

}