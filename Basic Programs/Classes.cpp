#include <iostream>
#include "people.h" //including the class

struct personalData{
    short age;
};

int main(){
    
    personalData person;
    person.age = 50;
    std::cout << person.age << std::endl;

    PersonalClassData person2;
    person2.age = 55;
    std::cout << person2.age << std::endl;

    PersonalClassData person3;
    person3.age = 70;
    std::cout << person3.age << std::endl;  

    person3.setAge(5);
    std::cout << person3.age << std::endl;
    std::cout << person3.getAge() << std::endl;

    return 0;

}