/*
 *copy constructor
 *1:通过使用另一个同类型的对象来初始化新创建的对象
 *2:复制对象把它作为参数传递给函数
 *3:复制对象，并从函数返回这个对象
 */

#ifdef classCopyConstructor_h
#define classCopyConstructor_h
#include <iostream>
using namespace std;
#endif /* classCopyConstructor.h */

class Line {
    public:
        Line(void);
        ~Line(void);
        Line( const Line &obj);  // 拷贝构造函数
        void setLength(double len);
        void getLength();
    private:
        double length;
};
