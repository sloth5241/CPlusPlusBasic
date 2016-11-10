/*
 * master (public,protect,private) usage
 * public: all variables and member functions could be accessed
 * protected: as same as private, but could be accessed in inherited class
 * private: could not be accessed by everything 
 */
#ifndef classAccessModifier_h
#define classAccessModifier_h
#include <iostream>
using namespace std;

class BigBox {
    public:
        double length;
        void setLength(double len);
        void getLength(); 
        void setWidth(double wid);
        void getWidth();
        void setHeight(double hei);
        void getHeight();
    protected:
        double width;
    private:    
        double height; 
}; 

class SmallBox:public BigBox {
}; 

#endif /* classAccessModifier.h */
