#include "constructor.h"
#include <iostream>
using namespace std;

Line::Line(double len, double wid) {
    cout << "obj is created" << endl;
    m_length = len;
    m_width = wid;
}

Line::~Line(void){
    cout << "obj is deleted" << endl;
}

void Line::m_getMembers() const {
    cout << "length is :" << m_length << endl;
    cout << "width is :" << m_width << endl;
}

int main() {
    double len = 100;
    double wid = 200;
    Line line(len,wid);
    line.m_getMembers();
    return 0;
}
