#include <iostream>
#include "copyConstructor.h"
using namespace std;

Line::Line(double len) {
    cout << "obj is created" << endl;
    m_length = len;
    ptr = new double;
    *ptr = len;
}

Line::Line(const Line& obj) {
    cout << "copy constructor" << endl;
    m_length = obj.m_length;
    ptr = new double;
    *ptr = *obj.ptr;
}

void Line::m_getLength() const {
    cout << "length is:" << m_length << endl;
    cout << "*ptr:" << *ptr << endl;
}

void display(Line obj) {
    obj.m_getLength();
}

Line::~Line() {
    cout << "free memory" << endl;
    delete ptr;
}

int main() {
    Line line1(100);
    Line line2 = line1;
    display(line1);
    display(line2);
    return 0;
}
