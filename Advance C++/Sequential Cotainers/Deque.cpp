//It stands for a double ended queue
#include <iostream>
#include <deque>    //pronounced as deck

int main(){

    std::deque<std::string> line;
    line.push_back("Customer 1");
    line.push_front("Customer 2");
    line.push_back("Customer 3");

    for(int i=0;i<line.size(); ++i){
        std::cout << line[i] << std::endl;
    }

    line.pop_back();
    line.pop_front();
     
    for(int i=0;i<line.size(); ++i){
        std::cout << line[i] << std::endl;
    }
    return 0;
} 