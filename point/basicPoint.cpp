#include <iostream>
using namespace std;

int main() {

    int a =100;
    int *p = NULL;
    p = &a;

    cout << "a的地址:" << &a << endl;
    cout << "a的值:" << a << endl;
    cout << "p的地址:" << &p << endl;
    cout << "p的值:" << p << endl;
    cout << "*p:" << *p << endl;
    return 0;
}
