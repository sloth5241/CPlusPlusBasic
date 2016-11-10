/*
 * 类成员的使用 
 */
#ifndef classMemberFunction_h
#define classMemberFunction_h
#include <iostream>
using namespace std;

class Box {
    public:
        double length;
        double width;
        void setLength(double len);
        void setWidth(double width);
        double returnLength();
        double returnWidth();
        double getVolum();
};

#endif /* classMemberFunction.h */
