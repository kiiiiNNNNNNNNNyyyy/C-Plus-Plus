#include <iostream>

struct personalData{
    std::string name;
    std::string lastname;
    std::string number;
    short age;
};  

int main(){
    personalData person;
    person.age = 23;
    person.name = "Arjun";
    person.lastname = "Dass";
    person.number = "5552223333";

    std::cout << person.name << std::endl;
    std::cout << person.lastname << std::endl;
    std::cout << person.age << std::endl;
    std::cout << person.number << std::endl;

    //can also create arrays

    personalData person2[5];
    person2[0].age = 24;
    person2[0].name = "Arjun";
    person2[0].lastname = "Dass";
    person2[0].number = "5552223333";

    person2[1].age = 25;
    person2[1].name = "Akshay";
    person2[1].lastname = "Mulay";
    person2[1].number = "4445556666";

    std::cout << person2[1].name << std::endl;
    std::cout << person2[1].lastname << std::endl;
    std::cout << person2[1].age << std::endl;
    std::cout << person2[1].number << std::endl;

    return 0;  
}