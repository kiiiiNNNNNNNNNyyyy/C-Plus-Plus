#include <iostream>
#include <utility>

int main(){
    
    std::pair<std::string, std::string> number1("Jones", "123"); //key value
    std::cout << number1.first << " : " <<  number1.second << std::endl;

    std::pair<std::string, int> student1("Brown", 80);
    std::cout << student1.first << " : " <<  student1.second << std::endl;
    return 0;
}