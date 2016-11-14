/**
 * const对象智能调用const成员函数
 * const 成员函数不能修改数据成员
 */
#ifndef constMember_h
#define constMember_h
class Screen {
    public:
        Screen() {
            _length = 123.123; 
            _width = 456.456;
        }
        void setLength(double); 
        void setWidth(double); 
        double getLength() const;
        double getWidth() const; 
        double getArea();
        int _number;
    private:
        double _length;
        double _width;
};
#endif  /*constMember_h*/
