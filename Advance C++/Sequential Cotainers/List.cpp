#include <iostream>
#include <list>

//using namespace std;

void display(std::list<std::string> lyst){
    std::list<std::string>::iterator iter = lyst.begin();
    while(iter != lyst.end()){
        std::cout  << *iter << std::endl;
        ++iter;
    }
}

int main(){

    std::list<std::string> names;
    names.push_back("Marty");
    names.push_back("Rick");
    names.push_back("Tom");
    names.push_back("Jim");
    names.push_back("David");

    std::list<std::string>::iterator iter = names.begin();  //iterate from the begining

    while(iter != names.end()){
        std::cout << *iter << std::endl;
        ++iter;
    }

    std::cout << "first item : " << names.front() << std::endl;
    std::cout << "last item : " << names.back() << std::endl;

    //Reverse a list
    names.reverse();

    std::list<std::string>::iterator iter2 = names.begin();

    while(iter2 != names.end()){
        std::cout << *iter2 << std::endl;
        ++iter2 ;
    }

    //Sort a list
    names.sort();
    std::list<std::string>::iterator iter3 = names.begin();

    while(iter3 != names.end()){
        std::cout << *iter3 << std::endl;
        ++iter3;
    }

    display(names);

    names.push_front("Barry");  // added to the front of th list
    display(names);
    std::cout << "Current Size : " << names.size() << std::endl;

    names.remove("Elizabeth");  // won't remove as it does not exists
    display(names);

    names.remove("Rick");   // will remove as Rick exists
    display(names);

    names.pop_front();
    display(names); //removes first element

    names.pop_back();   //removes last element
    display(names);

    names.clear();  //removes all elements from the list
    if(names.empty()){  //checks if the list is empty
        std::cout << "list is empty." << std::endl;
    }else{
        std::cout << "list is not empty." << std::endl;
    }
    return 0; 
}