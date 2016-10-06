#include <iostream>
#include "classOperatorReload.h"
using namespace std;

int main( )
{
    Box box1;                // 声明 Box1，类型为 Box
    Box box2;                // 声明 Box2，类型为 Box
    Box box3;                // 声明 Box3，类型为 Box
    double area = 0.0;     // 把体积存储在该变量中

    box1.setParas(10, 20);
    box2.setParas(30, 40);

    area = box1.getArea();
    cout << "box1 area is:" << area << endl;
    area = box2.getArea();
    cout << "box2 area is:" << area << endl;

    // 把两个对象相加，得到 Box3
    box3 = box1 + box2;

    area = box3.getArea();
    cout << "Box3 area is:" << area <<endl;

    return 0;
}
