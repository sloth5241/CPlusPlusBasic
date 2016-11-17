#include "thisPoint.h"
#include <iostream>
using namespace std;

void thisPoint::printThisAddress() {
    cout << "this 指针的值:" << this << endl;
}

thisPoint &thisPoint::getThis() {
    return *this;
}

int main() {
    thisPoint obj1;
    cout << "obj1 地址:" << &obj1 << endl; 
    obj1.printThisAddress();

    thisPoint obj2;
    cout << "obj2 地址:" << &obj2 << endl; 
    obj2.printThisAddress();
    
    obj2 = obj2.getThis();
    cout << "obj2 get this 值:" << &obj2 << endl;
}
