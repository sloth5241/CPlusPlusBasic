#include "classConstructor.h"
#include <iostream>
using namespace std;

Line::Line(double len):length(len) {
    cout << "obj is created" << endl;
    cout << "length is :" << length << endl;
}

Line::~Line(void){
    cout << "obj is deleted" << endl;
}

void Line::setLength(double len) {
    length = len;
}

void Line::getLength() {
    cout << "length is :" << length << endl;
}

int main() {
    Line line(34344);
    line.getLength();
    return 0;
}
