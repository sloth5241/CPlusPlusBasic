#include <iostream>
using namespace std;

int main() {
    const double *p = 0;
    const double len = 12.232;

    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "len = " << len << endl;
    cout << "&len = " << &len << endl;

    p = &len;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;


    double dval = 3.14;
    p = &dval;
    cout << "p=" << p << endl;
    cout << "*p=" << *p << endl;
    return 0;
}
