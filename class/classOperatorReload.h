#ifndef classOperatorReload_h
#define classOperatorReload_h
#include <iostream>
using namespace std;
#endif

class Box{
    public:
        double getArea(void){
            return length * width;
        }

        void setParas(double len, double wid ){
            this->length = len;
            this->width = wid;
        }

      // 重载 + 运算符，用于把两个 Box 对象相加
        Box operator+(const Box& b)
        {
            Box box;
            box.length = this->length + b.length;
            box.width = this->width + b.width;
            return box;
        }
    private:
        double length;      // 长度
        double width;     // 宽度
};

