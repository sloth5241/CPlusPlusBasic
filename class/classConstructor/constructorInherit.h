#ifndef classConstructorInherit_h
#define classConstructorInherit_h
#include <iostream>
#include <string>
using namespace std;
#endif

class Animal{
    public:
        Animal(string name, int age) {
            this->name = name;
            this->age = age;
            cout << "animal constructor" << endl; 
        }
    protected:
        string name;
        int age;
};

class Fish:public Animal {
    public:
        Fish(string name, int age):Animal("small", 89) {
            cout << "fish constructor" << endl;
        }
        void getInfo() {
            cout << "name is:" << this->name << endl;
            cout << "age is :" << this->age << endl;
        }
    
};
