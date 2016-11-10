#include <iostream>
#include "classMemberFunction.h"
using namespace std;
void Box::setLength(double len) {
    this->length = len;
}

void Box::setWidth(double width) {
    this->width = width;
}
int main() {
    Box box;
    box.setLength(100);
    box.setWidth(200);

    return 0;
}
