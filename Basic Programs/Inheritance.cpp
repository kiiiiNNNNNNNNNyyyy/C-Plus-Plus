#include <iostream>

class Point{    //base class, or parent class or  super class

    protected:
        int x;
    public:
        Point(int a){
            this->x = a;
            std::cout << "The constructor from point class has just been invoked" << std::endl;
        };
        ~Point(){
            std::cout << "The destructor from point class has just been invoked" << std::endl;
        };
        int getX(){
            return x;
        };
        void setX(int value){

        };
};

class Point2D : public Point{   // this means inheriting public stuff from Point class

};

void operationOnPoints();

int main(){
    operationOnPoints();
    return 0;
}

void operationOnPoints(){   
    Point p1(5);
    std::cout << p1.getX() << std::endl; 
};
