#include <iostream>
#include <map>

int main(){

    std::map<std::string, std::string> numbers;
    numbers["Jones"] = "365";
    numbers["Smith"] = "467";
    numbers["John"] = "256";

    std::cout << "Jones : " << numbers["Jones"] << std::endl;

    std::cout << "Number of numbers in the map : " << numbers.size() << std::endl;
    numbers.erase("Smith");
    std::cout << "Number of numbers in the map : " << numbers.size() << std::endl;
    return 0; 
}