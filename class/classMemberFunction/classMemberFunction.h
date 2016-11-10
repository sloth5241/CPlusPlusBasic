/*
 * learning member function of c++ class
 */
#ifndef classMemberFunction_h
#define classMemberFunction_h
#include <iostream>
using namespace std;
#endif /* classMemberFunction.h */

class Box {
    public:
        double length;
        double breadth;
        double height;
        void setLength(double len);
        void setBreadth(double bre);
        void setHeight(double hei);
        double getVolum();
};

