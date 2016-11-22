#ifndef classInherit_h
#define classInherit_h
#include <iostream>
using namespace std;

class Shape {
    public:
        Shape();
        ~Shape();
        void setLength(double len); 
        void setWidth(double wid);

    protected:
        double length;
        double width;
};

class Rectangle:public Shape {

    public:
        Rectangle(double len, double wid);
        ~Rectangle();
        double getArea();
};

#endif
