#include <iostream>

main(){

    int a[4];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    
    std::cout << "Index 0 = " << a[0] << " and address is: " << &a[0] << std::endl;
    std::cout << "Index 1 = " << a[1] << " and address is: " << &a[1] << std::endl;
    std::cout << "Index 2 = " << a[2] << " and address is: " << &a[2] << std::endl;
    std::cout << "Index 3 = " << a[3] << " and address is: " << &a[3] << std::endl;

    //MULTIDIMENSIONAL ARRAYS

    int mArray[3][3] = {0};
    
    std::cout << "Address is : " << &mArray[0] << " and Valud is: " << mArray[0] << std::endl;
    std::cout << "Address is : " << &mArray[0][0] << " and Valud is: " << mArray[0] << std::endl;
    std::cout << "Address is : " << &mArray[0][1] << " and Valud is: " << mArray[0] << std::endl;
}