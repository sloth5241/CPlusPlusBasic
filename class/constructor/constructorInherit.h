#ifndef constructorInherit_h
#define constructorInherit_h
#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        Animal(string name="zhaocong", int age=29); 
    protected:
        string m_name;
        int m_age;
};

class Fish:public Animal {
    public:
        Fish(string name, int age);
        void m_getInfo() const;
};
#endif
