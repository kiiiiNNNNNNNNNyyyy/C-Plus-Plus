#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

class PersonalClassData{
    //by default class members are private
    public: 
        short age;

        void setAge(int value){
            age = value;
        }

        short getAge(){
            return age;
        }
};

#endif