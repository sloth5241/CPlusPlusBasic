#include <iostream>
#include "classMemberFunction.h"
using namespace std;

void Box::setLength(double len) {
    this->length = len;
}

void Box::setWidth(double width) {
    this->width = width;
}

double Box::returnLength() {
   return this->length; 
}

double Box::getVolum() {
    return (this->length * this->width);
}
int main() {
    Box box;
    box.setLength(100);
    box.setWidth(200);
    cout << "获取长度:" << box.returnLength() << endl;
    cout << "面积为:" << box.getVolum() << endl;
    return 0;
}
