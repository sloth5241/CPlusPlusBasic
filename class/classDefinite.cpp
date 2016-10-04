#include "classDefinite.h"
#include <iostream>
using namespace std;

int main() {
    Box box1;
    Box box2;
    double volum1 = 0;    //volum of box1
    double volum2 = 0;    //volum of box2

    box1.length = 10.9;
    box1.breadth = 32.2;
    box1.height = 12.12;
    box2.length = 20.9;
    box2.breadth = 0;
    box2.height = 1.12;
    
    volum1 = box1.length * box1.breadth * box1.height;
    volum2 = box2.length * box2.breadth * box2.height;
    
    if (0 != volum1) {
        cout << "the volum of box1 is: " << volum1 << endl;
    }else {
        cout << "please check the properties of box1" << endl; 
    }
    if (0 != volum2) {
        cout << "the volum of box1 is: " << volum2 << endl;
    }else {
        cout << "please check the properties of box2" << endl; 
    }
    return 0;
}
