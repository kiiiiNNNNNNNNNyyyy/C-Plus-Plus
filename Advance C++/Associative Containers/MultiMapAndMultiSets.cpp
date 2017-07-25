#include <iostream>
#include <map>
#include <utility>
//multimap allows us to kepp the keys of the same name

int main(){

    std::multimap<std::string, std::string> numbers;
    numbers.insert(std::pair<std::string, std::string>("Jones", "123"));
    numbers.insert(std::pair<std::string, std::string>("Smith", "245"));
    numbers.insert(std::pair<std::string, std::string>("Tom", "222"));
    numbers.insert(std::pair<std::string, std::string>("Jones", "552"));
    numbers.insert(std::pair<std::string, std::string>("Rick", "158"));
    numbers.insert(std::pair<std::string, std::string>("Jones", "195"));

    std::string searchName = "Jones";
    std::multimap<std::string, std::string>::iterator iter = numbers.find(searchName);
    std::multimap<std::string, std::string>::iterator last = numbers.upper_bound(searchName);
    
    for(;iter != last; ++iter){
        std::cout << iter->first << " : " << iter->second << std::endl;
    }

    return 0;
}