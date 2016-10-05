/*
 * Constructor function of class
 * Destructor use to release file
 */
#ifndef classConstructor_h
#define classConstructor_h
#include <iostream>
using namespace std;
#endif /* classConstructor.h */

class Line {
    public:
        void setLength(double len);
        void getLength();
        Line(double len);
        ~Line(void);
    private:
        double length;    
};

