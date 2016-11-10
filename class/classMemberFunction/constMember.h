/**
 * const对象智能调用const成员函数
 * const 成员函数不能修改数据成员
 */
#ifndef constMember_h
#define constMember_h
class Screen {
    public:
        Screen() {
            this->length = 123.123; 
            this->width = 456.456;
        }
        void setLength(double); 
        void setWidth(double); 
        double getLength() const;
        double getWidth() const; 
        int arr[5];
    private:
        double length;
        double width;
};
#endif  /*constMember_h*/
