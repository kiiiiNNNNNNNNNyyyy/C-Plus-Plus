#include <iostream>

//Streams = sequence of bytes
//iostream = cin cin cerr
//fstream = ifstream, ofstream

int main(){

    //Managing output stream
    std::cout << "Hello World!1" << std::endl;
    std::cout.put('h'); // put for putting individual chars
    std::cout.put('e');
    std::cout.put('l');
    std::cout.put('l');
    std::cout.put('o');

    //endl not only adds a new line but it also flushes a buffer that is part of every iostream object.

    std::cout  << std::endl << "Hello flush" << std::flush; // flushes the buffers

    std::string  name, name2;
    std::cout << " Enter your name : " << std::endl;
    std::cin >> name;
    std::cout << "Your name is  " << name << std::endl;//tHIS WILL SHOW ERROR. Wont take anything after the space.

    std::cout << " Enter your name again : " << std::endl;
    getline(std::cin, name2);   // in strngs whem you need a space, you need to switch to getline
    std::cout << "Your name is  " << name2 << std::endl;//tHIS WILL SHOW ERROR. Wont take anything after the space.


    //Getting character input
    //this taken is taken from C , when strings were stored as char array
    char c; 
    c = std::cin.get();
    do{
        std::cout.put(c);
        c = cin.get();
    } while( !std::cin.eof());
    return 0;
}