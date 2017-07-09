#include <iostream>
#include "CopyContructor.h"
int main(){

    int a = 10;
    int b = a;
    
    a = 60;

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    Test obj(50, 100, 60);
    Test obj2 = obj;

    obj2.x = 200;
    *(obj.p) = 700;

    std::cout << "obj1.x : " << obj.x << std::endl;
    std::cout << "obj1.y : " << obj.y << std::endl;
    std::cout << "obj1.p : " << *obj.p << std::endl;

    std::cout << "obj2.x : " << obj2.x << std::endl;
    std::cout << "obj2.y : " << obj2.y << std::endl;
    std::cout << "obj2.p : " << *obj2.p << std::endl;

    return 0;

}