/*
 * Destructor use to release file
 */
#ifndef classConstructor_h
#define classConstructor_h
#include <iostream>
using namespace std;

class Line {
    public:
        void getMembers(); 
        Line(double, double);
        ~Line(void);
    private:
        double length;    
        double width;
};

#endif /* classConstructor.h */
