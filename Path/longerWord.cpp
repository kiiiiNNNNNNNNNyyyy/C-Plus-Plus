#include <iostream>

int main(){

    std::string word1; 
    std::string word2;

    std::cout << "Enter word 1 : ";
    std::cin >> word1;
    std::cout << std::endl;

    std::cout << "Enter word 2 : ";
    std::cin >> word2;
    std::cout << std::endl;

    if(word1.length() > word2.length()){
        std::cout << word1 << " is longer!!";
    }else if(word1.length() < word2.length()) {
        std::cout << word2 << " is longer!!";        
    }else{
        std::cout << word1 << " and " << word2 << " are of equal length!!";
    }
    return 0;
}