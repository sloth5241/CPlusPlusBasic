#include <iostream>
using namespace std;

int main() {

    double *pvalue;
    pvalue = new double;
    cout << "the address of pvalue is:" << &pvalue << endl;

    *pvalue = 123.123;
    cout << "the value of pvalue is:" << *pvalue << endl;
    cout << "the point of pvalue is:" << pvalue << endl;

    delete pvalue;
    cout << "-----after delete pointer-----" << endl; 
    cout << "the address of pvalue is:" << &pvalue << endl;
    cout << "the value of pvalue is:" << *pvalue << endl;
    cout << "the point of pvalue is:" << pvalue << endl;


    return 0;

}
