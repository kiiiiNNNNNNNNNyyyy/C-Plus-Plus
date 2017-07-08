#include <iostream>

struct personalData{
    std::string name;
    std::string lastname;
    std::string number;
    short age;
}a, b;  //creating objects of this structure here itself  

void test(personalData *);

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

    a.age = 50;
    std::cout << a.age << std::endl;
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

    std::cout << (*person2).name << std::endl;
    std::cout << (*(person2 + 1)).name << std::endl;
    std::cout << (*&person2[0]).name << std::endl;
    std::cout << person2->name << std::endl;
    std::cout << (person2 +1)->name << std::endl;

    //creating pointers of personal data
    personalData *p = &person2[0];
    std::cout << p->name << std::endl;  
    test(p);
    std::cout << p->name << std::endl;

    return 0;  
}

void test(personalData *person){    //we are only sending address in here    
    person->name = "Abhishek";
}