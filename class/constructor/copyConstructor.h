#ifndef copyConstructor_h
#define copyConstructor_h
#include <iostream>
using namespace std;

class Line {
    public:
        Line(double len=0);
        Line(const Line& obj);
        void m_getLength() const;
        ~Line();
    private:
        double m_length;
        double* ptr;
};
#endif /* copyConstructor.h */
