#include "people.h"
void PersonalClassData::setAge(int value){
    if(value < 0){
        age = 0;
    }else{
        age = value;
    }
}

PersonalClassData::PersonalClassData(){
    std::cout << "This constructor has been just invoked" << std::endl;
    age = 10;
}