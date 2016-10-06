#include <iostream>
#include "classCopyConstructor.h"
using namespace std;

int Line::objCount = 0;

void Line::getObjCount() {
    cout << "obj count is:" << Line::objCount << endl;
}

void Line::getLength() {
    cout << "length is:" << *p << endl;
}

void Line::getQ() {
    int temp = 200;
    q = new int;
    *q = temp;
    cout << "*q is:" << *q << endl;
}

int main() {
    Line l1(123);
    Line l2=l1;
    Line::getObjCount();
    l1.getLength();
    l2.getLength();
    l1.getQ();
    l2.getQ();
    return 0;
}
