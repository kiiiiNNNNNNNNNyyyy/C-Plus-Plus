#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

class PersonalClassData{
    //by default class members are private
    public: 

        PersonalClassData(){
            std::cout << "This constructor has been just invoked" << std::endl;
            age = 10;
        };

        ~PersonalClassData(){
            std::cout << "This Destructor has been just invoked" << std::endl;
        };
        short age;
        void setAge(int value){
            age = value;
        }

        short getAge(){
            return age;
        }
};

#endif