#include <iostream>

int main(){
    double var = 5.5;

    int a = 5;
    int b = 9;
    std::cout << (int)var << std::endl;
    std::cout << a/b << std::endl;  //result is 0., because they both are integer
    std::cout << (double)a/b << std::endl;

    std::cout <<static_cast<int>(var) << std::endl; //c++ version explicit way, rest are c versions

    char c = 'g';   //don't use double quotes, it wont work
    int x = static_cast<int>(c);
    std::cout << x << std::endl;

    return 0;
}