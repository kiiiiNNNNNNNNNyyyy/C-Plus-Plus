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

int main(){

    Animal animal;
    std::cout << animal.getVoice() << std::endl;
    return 0;
}