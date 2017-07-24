//It stands for a double ended queue
#include <iostream>
#include <deque>    //pronounced as deck

int find(std::deque<std::string> d, std::string value){
    for(int i=0; i<d.size(); ++i){
        if(d.at(i) == value){   //at function is for deque only
            return i;
        }
    }

    return -1;
}

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

    std::deque<std::string> names;
    names.push_back("David");
    names.push_back("Jim");
    names.push_back("Tom");
    names.push_back("Brian");
    names.push_back("Will");
    
    std::string searchName;
    std::cout << "Enter a name: " << std::endl;
    std::cin >> searchName;

    int pos = find(names, searchName);

    if(pos > -1){
        std::cout << searchName << " found at position " << pos << std::endl;
    }else{
        std::cout << searchName << " Not found!!!" << std::endl;
    }

    std::deque<std::string>::iterator iter = names.begin();
    ++iter;

    //Inserting at a particaular function
    names.insert(iter, "Arjun");
    
    for(iter = names.begin(); iter < names.end(); ++iter){
        std::cout << *iter << std::endl;
    }
    return 0;

    return 0;
} 