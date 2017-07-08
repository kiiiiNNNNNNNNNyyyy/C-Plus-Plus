#include <iostream>

void multiplyByAddress(int &, int);
int * multiplyByPointer(int *, int);
void multipleArrayBy(int *, int);
int main(){

    int a = 10;
    multiplyByAddress(a, 5);
    std::cout << a << std::endl; 
    int *b = multiplyByPointer(&a, 6);   //we need address because pointers points to address
    *b = 999;
    std::cout << *b << std::endl; 

    //benefit of function pointers we can return an array's starting locations then we can jump
    int array[10];
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        array[i] = i;
        std::cout << "array [" << i << "] : " <<  array[i] << std::endl;  
    }
    multipleArrayBy(array, 5);
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        std::cout << "array [" << i << "] : " <<  array[i] << std::endl;  
    }

    return 0;
}

void multiplyByAddress(int & var, int amount){
    var *= amount;
}

int * multiplyByPointer(int * var, int amount){ //function returns pointer

    std::cout << var <<std:: endl;  //returns address
    std::cout << *var <<std:: endl;  //translated as *&a - which returns value
    *var = *var * amount;
    return var;
}

void multipleArrayBy(int *array, int amount){
    for(int i=0; i<10; i++){
        array[i] = array[i] * amount;
    }
}   

