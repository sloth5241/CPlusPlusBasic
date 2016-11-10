#include <iostream>
#include "classObj.h"
using namespace std;

int main() {
    Screen myscreen;
    myscreen._height = 10;
    myscreen._width = 20;
    Screen bufscreen = myscreen;
    //对象的复制
    cout << "copy _height =" << bufscreen._height << endl;
    cout << "copy _width =" << bufscreen._width << endl;

    //指针类型对象
    Screen *ptr = new Screen;
    ptr->_height = 100;
    ptr->_width = 200;
    cout << "ptr _height=" << ptr->_height << endl;
    cout << "ptr _width=" << ptr->_width << endl;

    //指针类型对象的本质
    myscreen = *ptr;
    cout << "copy ptr _height =" << myscreen._height << endl;
    cout << "copy ptr _width =" << myscreen._width << endl;

    //类对象的引用
    Screen &ss = myscreen;
    cout << "ss._height=" << ss._height << endl;
    
    return 0;
}
