#include <iostream>

class Animal{
    public:
        virtual void talk() = 0;

};

class Dog: public Animal{
    public:
        virtual void talk(){
            std::cout << "Bow Wow " << std::endl;
        }
};

class Cat: public Animal{
    public:
        virtual void talk(){
            std::cout << "Meow Meow " << std::endl;
        }
};

int main(){

    Dog fido;
    Cat kitty;
    fido.talk();
    kitty.talk();
    return 0;
}