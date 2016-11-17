/*
 */

#ifdef classCopyConstructor_h
#define classCopyConstructor_h
#include <iostream>
#endif /* classCopyConstructor.h */
using namespace std;

class Line {
    public:
        Line(double len){
            cout << "obj is crearted" << endl;
            objCount++;
            this->length = len;
           p = new int;
           *p = this->length;
        }

        Line(const Line& C) {
            objCount++; 
            this->length = C.length;
            p = new int;
            *p = *C.p;
        }

        ~Line(){
            delete p;
            delete q;
            cout << "obj is free" << endl;
            objCount--;
        }

        static void getObjCount();
        void getLength();
        void getQ(); 
    private:
        static int objCount;
        int *p;
        int *q;
        double length;
};

