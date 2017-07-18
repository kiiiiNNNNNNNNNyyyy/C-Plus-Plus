#include <iostream>


//Abstract class - A class that cannot be instantiated and will not be instantiated 
// is called an abstract class
//we create a complete abstract class by assigning a virtial function to 0;
//virtual function allows functions to be used by its own class

class Shape{
    virtual void setX(int x) = 0;
    virtual void setY(int y) = 0;
    virtual int getX() const = 0;
    virtual int getY() const = 0;
    virtual void draw() const = 0;
};

class Circle : public Shape{
    private: 
        int x, y, radius;
    public:
        Circle(int xcoor, int ycoor, int r){
            x = xcoor;
            y = ycoor;
            radius = r;
        }

        virtual void setX(int xcoor){
            x = xcoor;
        }

        virtual void setY(int ycoor){
            y = ycoor;
        }

        void setRadius(int r){
            radius = r;
        }

        virtual int getX() const {
            return x;
        }

        virtual int getY() const {
            return y;
        }

        virtual int getRadius() const {
            return radius;
        }

        virtual void draw() const{
            std::cout << "Drawing circle at : " << getX() << ", " << getY() << " with a radius  of : " << getRadius()
            << std::endl;     
        }

};

int main(){

    Circle c1(2,3,5);
    c1.draw();
    return 0; 
}