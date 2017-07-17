#include <iostream>

class Quadilateral{
    protected:
        double side1, side2, side3, side4;
    public:
        Quadilateral(double s1, double s2, double s3, double s4){
            side1 = s1;
            side2 = s2;
            side3 = s3;
            side4 = s4;
        }

        void display(){
            std::cout <<"Quadilateral with sides : " << side1 << " " << side2 << " " << side3 << " " << side4 << std::endl; 
        }
};

class Trapezoid : public Quadilateral{
    public:
        Trapezoid(double s1, double s2, double s3, double s4) : Quadilateral(s1, s2, s3, s4){}
};

class Square : public Quadilateral{
    public: 
        Square(double side): Quadilateral(side, side, side, side){};
};



int main(){

    Trapezoid t1(3, 5, 5, 2);
    Square s1(6);
    t1.display();
    s1.display();
    return 0;
}