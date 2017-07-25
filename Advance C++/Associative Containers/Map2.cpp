#include <iostream>
#include <map>

int main(){

    std::map<std::string, int> grades;
    grades["Jones"]  = 75;
    grades["Tom"] = 35;
    grades["Jim"] = 95;

    std::string name;
    std::cout << "Enter a name: " << std::endl;
    std::cin >> name;

    if(grades.find(name) != grades.end()){
        std::cout  << name << " : " << grades[name] << std::endl;
    }else{
        std::cout << "Not found!!1";
    }

    //going through a map

    double average = 0.0;
    int sum = 0;

    std::map<std::string, int>::iterator it = grades.begin();
    while(it != grades.end()){  
        //iterator is standing as a pointer to a particular item in the map, if we want the second member of the item, we can write this
        //it->second is the number it->first is the name
        std::cout << it->second << std::endl;
        sum += it->second;
        ++it;
    }

    average = sum /grades.size();
    std::cout << "the average grade is " << average << std::endl; 

    return 0;
}