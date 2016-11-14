/*
 *静态成员函数只能访问静态数据成员
 *静态成员比全局变量好处多：隐藏数据和名字不与其他全局变量冲突
 */

#ifndef staticMember_h
#define staticMember_h
#include <iostream>
using namespace std;

class Account {
    public:
        static const int nameSize = 10;
        static int arr[nameSize];

};

#endif /* classStaticMember.h */


