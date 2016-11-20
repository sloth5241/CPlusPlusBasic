#ifndef classPolymorphism_h
#define classPolymorphism_h
#include <iostream>
using namespace std;
#endif

class Shape {
    protected:
        double width,height;
    public:
        Shape(double width=0, double height=0) {
            this->width = width;
            this->height = height;
        }

        virtual double area() {
            cout << "parent area is: " << endl;
            return (width * height);
        }
};

class Rectangle: public Shape {
    public:
        Rectangle( double width=0, double height=0):Shape(width, height) { }
        double area ()
        { 
            cout << "Rectangle class area :" <<endl;
            return (width * height); 
        }
};

class Triangle: public Shape{
    public:
        Triangle( double width=0, double height=0):Shape(width, height) { }
        double area ()
        { 
            cout << "Triangle class area :" <<endl;
            return (width * height / 2); 
        }
};

