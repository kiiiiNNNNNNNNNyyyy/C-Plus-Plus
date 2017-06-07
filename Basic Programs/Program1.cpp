#include <iostream>

main(){

    int a = 4;
    std::cout<<"Hey !! hwat is up!!" << a << std::endl; //allocating space in memory = 4 bits
    std::cout << "Getting address of the variale: " << &a << std::endl;
    a = 10;
    std::cout << "Value of a: " << a << " and adress is still same: " << &a << std::endl;

    /*
        variables cannot have the same name
        variables cannot start with a number 
        we cannot use space in variables name
        variable should be self-descriptive
        variables cannot have special characters keywords
        variables should be nouns
    */

    int x = 40, b = 0, c = 20, d;  // -2billions to 2 billions, 4 Bytes
    std::cout << "Value of x: " << x << " Memory Address is : " << &x << std::endl;
    std::cout << "Value of b: " << b << " Memory Address is : " << &b << std::endl;
    std::cout << "Value of c: " << c << " Memory Address is : " << &c << std::endl;
    std::cout << "Value of d: " << d << " Memory Address is : " << &d << std::endl;

    short t = 5; //-32768 to 32768, 2 Bytes
    std::cout << "Value of short t: " << t << std::endl;

    float t2 = 5.12;    //4 bytes that are upto 38 zeros
    double t3 = 5.12;   //8 bytes that are upto 308 zeros

    std::cout << "Value of t2: " << t2 << std::endl;
    std::cout << "Value of t3: " << t3 << std::endl;

    char t4 = 'a';
    std::cout << t4 << std::endl;

    std::string t5 = "Hello, I am a string!!"; 
    std::cout << t5 << std::endl;

    std::string t6 = ". I am used for joining!!";
    std::string t7 = t5 + t6;
    std::cout << t7 << std::endl;

    bool t8 = true;
    std::cout << "Boolean is : "<< t8 << std::endl;
    
    unsigned short int t9 = 65534;   //unsigned short int 0 - 65535
    std::cout << "Value of unsigned short int is : " << t9 << std::endl; 

    const std::string name = "Arjun Dass";  //this value will never change
    std::cout << "Constant value is: " << name << std::endl;

    int input;
    std::cin >> input;
    std::cout << "Your input was : " << input;
}

