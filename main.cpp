#include <iostream>
using namespace std;
#include "test.h"

void display(Line obj)
{
   cout << "Length of line : " << obj.getLength() <<endl;
}

int main( void ) {
    Line line1(10);

    Line line2 = line1; // 这里也调用了拷贝构造函数

    display(line1);
    display(line2);

    return 0;
}

