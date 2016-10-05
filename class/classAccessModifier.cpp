#include <iostream>
#include "classAccessModifier.h"
using namespace std;

void BigBox::setLength(double len) {
    length = len;
}

void BigBox::getLength() {
    cout << "bigbox length(public) is:" << length << endl;
}

void BigBox::setHeight(double hei) {
    height = hei;
}

void BigBox::getHeight() {
    cout << "bigbox height(private) is:" << height << endl;
}

void BigBox::setWidth(double wid){
    width = wid;
}

void BigBox::getWidth() {
    cout << "bigbox width(protected) is:" << width << endl;
}

int main() {
    BigBox bigbox;
    bigbox.setLength(19.32);
    bigbox.getLength();
    bigbox.setHeight(45.12);
    bigbox.getHeight();
    bigbox.setWidth(200);
    bigbox.getWidth();
    cout << "-----------smallbox------------------" << endl;
    SmallBox sbox;
    sbox.setLength(100);
    sbox.getLength();
    sbox.setWidth(200);
    sbox.getWidth();
    sbox.setHeight(300);
    sbox.getHeight();
    return 0;
}
