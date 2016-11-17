#include "constructorInherit.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(string name, int age) {
    m_name = name;
    m_age = age;
    cout << "animal constructor" << endl;
}

Fish::Fish(string name, int age):Animal(name, age) {
    cout << "fish constructor" << endl;
}

void Fish::m_getInfo() const{
    cout << "name is:" << m_name << endl;
    cout << "age is:" << m_age << endl;
}
int main() {

    Fish fh("fish", 29);
    fh.m_getInfo();
    return 0;
}
