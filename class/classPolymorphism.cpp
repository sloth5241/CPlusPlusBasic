#include <iostream>
#include "classPolymorphism.h"
using namespace std;

int main() {

    double tempArea = 0;
    Shape *shape;
    Rectangle rec(10,7);
    Triangle  tri(10,5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    tempArea = shape->area();
    cout << " area is " << tempArea << endl;
    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    tempArea = shape->area(); 
    cout << " area is " << tempArea << endl;
    return 0;
}
