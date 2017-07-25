//instrad of using both key and value, it only stores a key
//Sets sorts the items in order and it only stores unique value
#include <iostream>
#include <set>

int main(){

    std::set<std::string> words;
    std::string  word = "";

    do{
        std::cout << "Enter a word : ";
        std::cin >> word;
        words.insert(word);
    }while(word != "quit");

    std::set<std::string>::iterator iter = words.begin();

    while(iter != words.end()){
        std::cout  << *iter << " ";
        ++iter;  
    }
    return 0;
}