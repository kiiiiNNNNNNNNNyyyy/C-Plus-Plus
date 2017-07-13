#include <iostream>

class Animal{
    protected:
        std::string voice;
    public:
        Animal(){
            voice = "default voice";
        };
        ~Animal(){

        };
        std::string getVoice(){
            return voice;
        };
};

class Dog : public Animal{
    std::string sign;
    public:
        Dog(){
            sign = "D";
            voice = "Bow Bow";
        }
        ~Dog(){

        }
        std::string getVoice(){
            return voice + " " + sign;
        }
};

class Cat : public Animal{
    std::string sign;
    public: 
        Cat(){
            sign = "C";
            voice = "Meow Meow";
        }
        ~Cat(){

        }
        std::string getVoice(){
            return voice + " " + sign;
        }
};

class Cow : public Animal{
    std::string sign;
    public: 
        Cow(){
            sign = "CO";
            voice = "Moo Moo";
        }
        ~Cow(){

        }
        std::string getVoice(){
            return voice + " " + sign ;
        }
};

void voiceOfAnimal(Animal *);
int main(){

    Animal animal;
    std::cout << animal.getVoice() << std::endl;

    Cat cat;
    Dog dog;
    Cow cow;

    std::cout << dog.getVoice() << std::endl;
    std::cout << cat.getVoice() << std::endl;
    std::cout << cow.getVoice() << std::endl;

    voiceOfAnimal(&animal);
    return 0;
}

void voiceOfAnimal(Animal *p){
    std::cout << p->getVoice()  << std::endl;
}