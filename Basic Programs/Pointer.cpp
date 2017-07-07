#include <iostream>

//pointers  are variable that can store addresses of variables
int main(){
    int var = 5;
    int a = 200;

    std::cout << &var << std::endl; //returns address
    std::cout << *&var << std::endl; //returns value at that address

    int *p; //this variable can point to the address - this initialization is just to inform that it will be containing pointer
            //the  name of the variable is p
    p = &var;   //can only store address not the value  - same as int *p = &var
    std::cout << p << std::endl;    //returns address
    //if you store p = var. it will show error, cause it can only store an address  
    std::cout << *p << std::endl; //this * is retrieve the data stored at this pointer

    *p = 100;
    std::cout << var << std::endl;  //setting the value of variable at that address to 100.
    std::cout << *p <<std::endl;

    var = 60;
    std::cout << var << std::endl;  //changin the value 
    std::cout << *p <<std::endl;

    int * const x =  &a;    // you cannot change this value
    *x = 25;    // though you can the value the ppointer is pointing to
    std::cout << a << std::endl;  //changin the value 
    std::cout << *x <<std::endl;

    int * const p_const = &a; //this is apointer that has to be initialized wjhen defined
    const int * x2 = &a;    //this is a pointer that cannot change the value that it is pointing to
    const int * const x3 = &a;  //this is a pointer that cannot change the value that is under address and it can change the address

    //getting the address of the pointer coz we are storing it in the memory
    int oridinaryVariable = 10;
    int *oridinary = &oridinaryVariable;

    std::cout << "ordinary variable : " << oridinaryVariable << std::endl;  //integer value
    std::cout << "& ordinary variable : " << &oridinaryVariable << std::endl;  //integer value
    std::cout << "ordinary pointer : " << oridinary << std::endl; //address
    std::cout << "*ordinary pointer : " << *oridinary << std::endl;    //integer value from pointer
    std::cout << "&ordinary pointer : " << &oridinary << std::endl;    //address of the pointer

    return 0;
}