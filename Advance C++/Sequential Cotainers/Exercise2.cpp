#include <iostream>
#include <deque>
#include <fstream>
#include <string>

int main(){

    std::deque<std::string> names;
    std::ifstream nameList;
    nameList.open("D:\\Git\\C-Plus-Plus\\Advance C++\\Sequential Container\\file.txt");
    std::string line;

    while(!nameList.eof()){
        getline(nameList, line);
        std::string::iterator it = line.end();
        --it;
        size_t pos = line.find(" ");
        std::string name = line.substr(0, pos);
        if(*it == 'p'){
            names.push_front(name);
        }else{
            names.push_back(name);
        }
    }

    std::deque<std::string>::iterator it = names.begin();
    while(it != names.end()){
        std::cout << *it << std::endl;
        ++it;
    }

    nameList.close();
    return 0;
}