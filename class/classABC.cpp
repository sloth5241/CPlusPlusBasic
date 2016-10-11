#include "classABC.h"
#include <iostream>
using namespace std;
int main () {
    Shape *shape;
    double area=0;
    Rectangle rec(5,7);
    Triangle tri(5,7);

    shape = &rec;
    area = shape->getArea();
    cout << "area is :" << area << endl; 

    shape = &tri;
    area = shape->getArea();
    cout << "area is :" << area << endl; 

    return 0;
}
