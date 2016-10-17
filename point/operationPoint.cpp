#include <iostream>
using namespace std;

int main() {
    cout << "----int指针移动-----" << endl;
    int *pint = NULL;
    cout << "pint=" << pint << endl;
    cout << "++pint = " << ++pint << endl;

    cout << "----lint指针移动-----" << endl;
    int *plint = NULL;
    cout << "plint=" << plint << endl;
    cout << "++plint = " << ++plint << endl;


    cout << "----float指针移动-----" << endl;
    float *pfloat = NULL;
    cout << "pfloat=" << pfloat << endl;
    cout << "++pfloat = " << ++pfloat << endl;

    cout << "----double指针移动-----" << endl;
    double *pdouble = NULL;
    cout << "pdouble=" << pdouble << endl;
    cout << "++pdouble = " << ++pdouble << endl;

    cout << "-----指针与数组-----" << endl;
    int arr[5] = {10,20,30,40,50};
    int *parr = &arr[0];
    for(int i =0; i<5; i++) {
        cout << "parr = " << parr << endl;
        cout << "*parr = " << *parr << endl;
        parr++;
    }
    return 0;
}
