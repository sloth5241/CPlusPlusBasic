#include <iostream>
#include "classStaticMember.h"
using namespace std;

int Line::objCount = 0;    //静态成员初始化

Line::Line(double len):length(len) {
    cout << "obj is created" << endl;
    Line::objCount++;
}

Line::~Line() {
    cout << "freeing memory" << endl;
}

void Line::setLength(double len) {
    this->length = len;
}

void Line::getLength() {
    cout << "length is :" << this->length << endl;
}

static int getObjCount() {
    return Line::objCount;
}

int Line::getObjCount() {
    return objCount;
}

int main() {
    int tempCount = 0;
    Line line1(10);
    Line line2(20);
    Line line3(30);
    tempCount = Line::getObjCount();
    cout << "temp count is :" << tempCount << endl;
}
