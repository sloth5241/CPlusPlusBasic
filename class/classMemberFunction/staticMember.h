/*
 *静态成员函数只能访问静态数据成员
 *静态成员比全局变量好处多：隐藏数据和名字不与其他全局变量冲突
 *静态类成员可以是private
 *在类外初始化
 */

#ifndef staticMember_h
#define staticMember_h
#include <string>
using namespace std;

class Account {
    public:
        Account( double amount, const string &owner ){
            m_amount = amount;
            m_owner = owner;
        }
        string getOwner() const;
        static double getRate();
    private:
        static double m_rate;
        double m_amount;
        string m_owner;

        static const int nameSize = 16;
        static const char name[nameSize];
};

#endif /* classStaticMember.h */


