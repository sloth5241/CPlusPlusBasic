#include <iostream>
#include "classMemberFunction.h"
using namespace std;

void Box::setLength(double len) {
   length = len; 
}

void Box::setBreadth(double bre) {
    breadth = bre;
}

void Box::setHeight(double hei) {
    height = hei;
}

double Box::getVolum() {
    double volum = length*breadth*height;
    return volum;
}

int main() {

    Box box;
    double volum;
    box.setLength(10.12);
    box.setBreadth(12.12);
    box.setHeight(23);
    volum = box.getVolum();
    cout << "volum is :" << volum << endl;
    return 0;
}
