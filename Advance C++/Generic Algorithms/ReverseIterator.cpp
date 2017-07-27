#include <iostream>
#include <vector>

int main(){

    std::vector<int> numbers;

    for(int i=1; 1<=10; ++i){
        numbers.push_back(i);
    }

    for(std::vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter){
        std::cout << *iter << " ";      
    }

    for(std::vector<int>::reverse_iterator riter = numbers.rbegin(); riter != numbers.rend(); ++riter){
        std::cout << *riter << " ";      
    } 
    return 0;
}