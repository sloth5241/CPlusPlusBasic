#include <iostream>
#include "constMember.h"
using namespace std;

double Screen::getLength() const {
    return _length;
}

double Screen::getWidth() const {
    return _width;
}

void Screen::setLength(double len) {
    _length = 100;
}

double Screen::getArea() {
    return (_length*_width);
}
int main() {
    double area = 0;
    const Screen sc; 
    cout << "sc length:"  << sc.getLength() << endl; 
    cout << "sc width:" << sc.getWidth() << endl;
    //sc.number = 200; 
    //area = sc.getArea();    //const对象只能访问const成员函数
     
    Screen ss;
    ss.setLength(100);
    cout << "ss length:" << ss.getLength() << endl;
    ss._number = 200;
    cout << "ss number:" << ss._number << endl;
    area = ss.getArea();
    cout << "ss area:" << area << endl;
    return 0;
}
