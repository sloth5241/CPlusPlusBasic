/*
 *static viariable and static function
 *静态成员函数只能访问静态数据成员，不能访问其他静态成员函数和类外部的其他函数
 *只要使用类名加范围解析运算符 :: 就可以访问
 */

#ifndef classStaticMember_h
#define classStaticMember_h
#include <iostream>
using namespace std;
#endif /* classStaticMember.h */

class Line {
    public:
        static int objCount;
        Line(double len=10);
        ~Line();
        void setLength(double len);
        void getLength();
        static int getObjCount();
    private:
        double length;
};



