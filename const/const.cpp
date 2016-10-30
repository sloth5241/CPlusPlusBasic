#include <iostream>
using namespace std;
void constValue() {
    const double* p = 0;
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
}

void constPoint() {
    double len = 123.213;
    double wid = 90123.89;
    double* const p = &len;
    cout << "*p = " << *p << endl;

    //p = &wid; //error
}

int main() {
    //constValue();
    constPoint();
    return 0;
}
