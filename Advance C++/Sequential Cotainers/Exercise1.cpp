#include <iostream>
#include <list>

void display(std::list<int> lyst){
    std::list<int>::iterator iter = lyst.begin();
    while(iter != lyst.end()){
        std::cout << *iter << std::endl;
        ++iter;
    }
}

void insertMax(std::list<int> &lyst, int value){
    lyst.sort();
    int max = lyst.back();
    if(value > max){
        lyst.push_back(value);
    }
}

int main(){
    std::list<int> numbers;
    int number;

    for(int i=1; i<=10; i++){
        std::cout << "Enter a number : " <<std::endl;
        std::cin >> number;
        insertMax(numbers, number); 
        //if passing a datastructure as a arguement, always pass an address in the function, so that the starting location of the structure is passed
    }

    display(numbers);
    return 0;
}