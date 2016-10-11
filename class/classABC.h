#ifndef classABC_h
#define classABC_h
#include <iostream>
using namespace std;
#endif

class Shape{
    protected:
        double width;
        double height; 
    public:
        virtual double getArea() = 0;
        Shape(double width=0, double height=0) {
            this->width = width;
            this->height = height;
        }
};

class Rectangle: public Shape {
    public:
        Rectangle(double width, double height):Shape(width, height){
             
        }
        double getArea() {
            return (width*height);
        }
};

class Triangle:public Shape {
    public:
        Triangle(double width, double height):Shape(width, height){

        }
        double getArea() {
            return (width*height)/2;
        }
};
