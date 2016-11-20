#include "constructorInherit.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(string name, int age) {
    m_name = name;
    m_age = age;
    cout << "animal constructor" << endl;
}

Fish::Fish(string name, int age, string country):Animal(name, age) {
    cout << "fish constructor" << endl;
    m_country = country; 
}

void Fish::m_getInfo() const{
    cout << "name is:" << m_name << endl;
    cout << "age is:" << m_age << endl;
    cout << "country is:" << m_country << endl;
}

int main() {
    Fish fh("fish", 29, "china");
    fh.m_getInfo();
    return 0;
}
