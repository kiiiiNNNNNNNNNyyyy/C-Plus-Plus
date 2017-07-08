#include <iostream>

int main(){

    std::string text = "Tell";  //it actually 5 length character the last one is '\0'

    for(int i=0; i<text.length(); i++){
        std::cout << text[i] << std::endl;
    }

    char ch = text[0];
    std::cout << ch << std::endl;

    char characters[] = "1234"; //can automatically gives the right size
    int a[3] = {1, 2, 3}; 

    std::cout << "For characters  : " << std::endl;
    std::cout << characters << std::endl; //this should provide the address but it returns the value unlike array;
    std::cout << characters[0] << std::endl;   
    std::cout << characters[1] << std::endl;
    std::cout << *(characters) << std::endl;

    char *p = characters;
    std::cout << p[0] << std::endl;
    std::cout << *(p) << std::endl;

    //char text2[] = text;    //we cannot do something like this coz we are giving character a string
    //char * text2 = text;    //we cannot even do this
    const char * text2 = text.c_str();    //we can use this, const is necessary because its returning a constant

    char array [] = "Here is a new text";
    std::string test = array;
    std::cout << test << std::endl;

    const char *a2 = "this is a test 12344";
    a[2] = 'a';   //We cannot do this without const, because it is a constant and it is deprecated
    std::cout << a2 << std::endl;

    char b[] =  "This is also a test message";  
    b[0] = 'g'; //this is possible, this only in case of pointers we cannot assign
    std::cout << b << std::endl;

    //this is because in when we initialize a pointer, we are creating space in memory for that pointer and it cannot be changed 
    //for a particular character in a string, because that pointer is just pointing to that string
    //whereas in the second case we are initializing space for every character in that string, therefore, data at the space can
    //be changed    

    char * const dynamicArray = new char[50];
    std::cout << dynamicArray << std::endl; //random characters because not initialized
    //dynamicArray = "lalala";    //we cannot change this value because its a pointer if char is not a const
    dynamicArray[0] = 'g';      //will not work
    std::cout << dynamicArray << std::endl; //random characters because not initialized

    delete [] dynamicArray; 

    std::cout << "For integer array  : " << std::endl;  
    std::cout << a << std::endl;    //this returns the address 
    std::cout << a[0] << std::endl;
    std::cout << *(a) << std::endl;

    int *p2 = a;
    std::cout << p2[0] << std::endl;
    std::cout << *(p2) << std::endl;
    

    return 0;

}