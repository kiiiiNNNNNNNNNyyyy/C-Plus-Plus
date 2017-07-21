#include <iostream>

template <typename T, typename U>
T max(T arg1, U arg2){
    return (arg1 > arg2) ? arg1 : arg2;
} 

int main(){

    double num1 = 35.55;
    int num2 = 13;
    std::cout << "Max value is : " << max(num1, num2) << std::endl;
    return 0;
}