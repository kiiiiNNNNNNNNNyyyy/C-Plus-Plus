#include <iostream>

template<typename T, typename T2>
T add(T var1, T2 var2){
    return var1 + var2;
}

int main(){
    std::cout << add(2 , 5.6) << std::endl;
    return 0;
}
