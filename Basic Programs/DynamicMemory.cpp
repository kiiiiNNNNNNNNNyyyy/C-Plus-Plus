#include <iostream>

int main(){

    //normal allocation of memory
    int array[100];
    
    //local variables are destroyed after the closing brackets

    int  *p = new int;  //this memory only belongs to our program
    std::cout << *p << std::endl;

    *p = 50;
    std::cout << *p << std::endl;
    std::cout << p << std::endl;

    //to reuse that memory we need to free that memory
    delete p;   //we are not deleting the memory we are just releasing the memory
    //p = NULL;   //we should assign it to null so that its not a randon number. You won't be able to change it afterwards
    //std::cout << "After assigning null : " << *p << std::endl;   //50 will not be here anymore 

    if(p != NULL){
        *p = 70;
        std::cout << *p << std::endl;   //50 will not be here anymore 
        std::cout << p << std::endl;
    }


    return 0;
}