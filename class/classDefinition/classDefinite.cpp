#include "classDefinite.h"
#include <iostream>
using namespace std;

int main() {
    Box box1;
    Box *box2 = new Box;
    try{
        box1.length = 1;
        box2->length = 10;

        cout << "box1.length = " << box1.length << endl;
        cout << "box2->length = " << box2->length << endl; 

        (*box2).length = 200;
        cout << "(*box2).length = " << (*box2).length << endl; 
        
    }
    catch(const char* msg) {
        cout << msg << endl;
    }
    return 0;
}
