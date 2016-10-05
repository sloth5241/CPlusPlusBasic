#include <iostream>
#include "classCopyConstructor.h"
using namespace std;

Line::Line() {
    cout << "obj is created" << endl;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor" << endl;
}

Line::~Line() {
    cout << "freeing memory" << endl;
}

void Line::setLength(double len) {
    length = len;
}

void Line::getLength() {
    cout << "length is:" << length << endl;
}

int main() {
    Line line;
    line.setLength(123.213);
    line.getLength();

    Line line2 = line;
    line2.getLength();
    return 0;
}
