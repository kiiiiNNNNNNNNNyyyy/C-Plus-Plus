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

class Point2D : public Point{   // this means inheriting public stuff from Point class //derived class or child class
    protected:
        int y;
    public:
         Point2D(int x, int y) : Point(x){
            this->y = y;
         };
         ~Point2D(){

         };
};

class Point3D : public Point2D{

};
void operationOnPoints();

int main(){
    operationOnPoints();
    return 0;
}

void operationOnPoints(){   
    Point2D p2(5, 6);
    std::cout << p2.getX() << std::endl; 
};
