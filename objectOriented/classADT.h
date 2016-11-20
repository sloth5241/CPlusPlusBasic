#ifndef classADT_h
#define classADT_h
#include <iostream>
using namespace std;
#endif

class Adder {
    public:
        Adder(int i) {
           this->total = i; 
        }
        //接口
        void addNumber(int number) {
            this->total += number;
        }
        //接口
        void getTotal() {
            cout << "total is: " << this->total << endl;
        }

    private:
        int total;    
};
