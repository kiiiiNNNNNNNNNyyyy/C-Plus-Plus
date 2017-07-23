#include <iostream>

//Streams = sequence of bytes
//iostream = cin cin cerr
//fstream = ifstream, ofstream

int main(){
    std::cout << "Hello World!1" << std::endl;
    std::cout.put('h'); // put for putting individual chars
    std::cout.put('e');
    std::cout.put('l');
    std::cout.put('l');
    std::cout.put('o');

    //endl not only adds a new line but it also flushes a buffer that is part of every iostream object.

    std::cout  << std::endl << "Hello flush" << std::flush; // flushes the buffers
    return 0;
}