#include "classInherit.h"
#include <iostream>
using namespace std;

Shape::Shape() {
    cout << "base-obj is created" << endl;
}

Shape:: ~Shape() {
    cout << "base-obj is free "<< endl;
}

void Shape::setLength(double len) {
    this->length = len;
}

void Shape::setWidth(double wid) {
    this->width = wid;
}

Rectangle::Rectangle(double len, double wid) {
    this->length = len;
    this->width = wid;
    cout << "inherit-obj is created" << endl;
}

Rectangle::~Rectangle() {
    cout << "inherit-obj is free" << endl;
}

double Rectangle::getArea() {

    double area = 0;
    area = length * width;
    cout << "area is:" << area << endl; 
    return area;
}

int main() {
    Rectangle rec(12,32);
    rec.getArea();
    return 0;
}

