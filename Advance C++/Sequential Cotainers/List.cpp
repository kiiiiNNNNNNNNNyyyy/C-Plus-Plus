#include <iostream>
#include <list>

//using namespace std;

int main(){

    std::list<std::string> names;
    names.push_back("Marty");
    names.push_back("Rick");
    names.push_back("Tom");
    names.push_back("Jim");
    names.push_back("David");

    std::list<std::string>::iterator iter = names.begin();

    while(iter != names.end()){
        std::cout << *iter << std::endl;
        ++iter;
    }

    std::cout << "first item : " << names.front() << std::endl;
    std::cout << "last item : " << names.back() << std::endl;

    names.reverse();

    std::list<std::string>::iterator iter2 = names.begin();

    while(iter2 != names.end()){
        std::cout << *iter2 << std::endl;
        ++iter2 ;
    }

    std::list<std::string>::iterator iter3 = names.begin();

    while(iter3 != names.end()){
        std::cout << *iter3 << std::endl;
        ++iter3;
    }

    names.sort();

    return 0; 
}