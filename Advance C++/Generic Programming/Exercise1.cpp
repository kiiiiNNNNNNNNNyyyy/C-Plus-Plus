#include <iostream>

template <typename T>

bool equals(T value1, T value2){
    if(value1 == value2){
        return true;
    }else{
        return false;
    }
}

int main(){

    int a, b;
    a = 1; b = 2;
    if(equals(a, b)){
        std::cout << a << " and " << b << " are equal." << std::endl;
    }

    std::cout << a << " and " << b << " are not equal." << std::endl;

    std::string word1, word2;

    word1 = word2 = "Hello!";
    if(equals(word1, word2)){
        std::cout << word1 << " and " << word2 << " are equal." << std::endl;
    }else{
        std::cout << word1 << " and " << word2 << " are not equal." << std::endl;
    }
    
    return 0;
}