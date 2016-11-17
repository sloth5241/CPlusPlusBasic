#include "classConstructor.h"
#include <iostream>
using namespace std;

Line::Line(double len, double wid) {
    cout << "obj is created" << endl;
    this->length = len;
    this->width = wid;
}

Line::~Line(void){
    cout << "obj is deleted" << endl;
}

void Line::getMembers() {
    cout << "length is :" << length << endl;
    cout << "width is :" << width << endl;
}

int main() {
    Line line(123,456);
    line.getMembers();
    return 0;
}
