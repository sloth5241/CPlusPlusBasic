#include <iostream>
using namespace std;

int main() {
    int a = 190;
    int *p = &a;
    cout << "&a=" << &a << endl;
    cout << "p =" << p << endl;
    cout << "&p = " << &p << endl;
    cout << "*p = " << *p << endl;

    int **pp = &p;
    cout << "&pp = " << &pp << endl;
    cout << "pp = " << pp << endl;
    cout << "*pp=" << *pp << endl;
    cout << "**pp=" << **pp << endl;
    return 0;
}
