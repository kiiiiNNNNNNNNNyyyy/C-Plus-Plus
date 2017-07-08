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

    std::cout << "For integer array  : " << std::endl;  
    std::cout << a << std::endl;    //this returns the address 
    std::cout << a[0] << std::endl;
    std::cout << *(a) << std::endl;

    int *p2 = a;
    std::cout << p2[0] << std::endl;
    std::cout << *(p2) << std::endl;
    

    return 0;

}