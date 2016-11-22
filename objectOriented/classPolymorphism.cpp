#include <iostream>
#include "classPolymorphism.h"
using namespace std;


void printArea(Shape *shape){
    double tempArea = 0;
    tempArea = shape->area();
    cout << tempArea << endl;
}


int main() {
    printArea(new Rectangle(10,7));
    printArea(new Triangle(20,9));
    return 0;
}
