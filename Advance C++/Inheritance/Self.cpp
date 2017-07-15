#include <iostream>
#include <sstream>

class Dog{
    protected: 
        std::string color;
        int height;

    public:

        Dog(){
            color = "Brown";
            height = 50;
        }

        Dog(std::string col, int h){
            color = col;
            height = h;
        }

        std::string getColor(){
            return color;
        }

        std::string getDetials(){
            std::stringstream stm;
            stm << color << " : " << height;
            return stm.str();
        } 
};

class Puppy : public Dog {
    private:
        int tail;
    
    public: 

        Puppy(){

        }
        Puppy(int t) : Dog(color, height){
            tail = t;
        }
        
        void getDetials(){
            std::cout << color << " : " << height << " : " << tail;
        }

};

int main(){

    Dog d1("Red", 49);
    std::cout << d1.getDetials() << std::endl;

    Puppy p(5);
    p.getDetials();
    return 0;
}