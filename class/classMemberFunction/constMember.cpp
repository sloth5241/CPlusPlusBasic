#include <iostream>
#include "constMember.h"
using namespace std;

double Screen::getLength() const {
    return this->length;
}

double Screen::getWidth() const {
    return this->width;
}

void Screen::setLength(double len) {
    this->length = 100;
}

int main() {
    const Screen sc; 
    cout << "sc length:"  << sc.getLength() << endl; 
    cout << "sc width:" << sc.getWidth() << endl;

    Screen ss;
    ss.setLength(100);
    cout << ss.getLength() << endl;
    return 0;
}
