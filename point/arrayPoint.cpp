#include <iostream>
using namespace std;
const int number = 5;
int main() {
    cout << "-----basic array-----" << endl;
    int arr[number] = {12,23,32,43,54};
    for (int i=0; i< number; i++ ) {
        cout << "&arr[i] = " << &arr[i] << endl;
        cout << "arr[i] = " << arr[i] << endl;
    } 

    cout << "-----point array-----" << endl;
    int *parr[number];
    for (int i=0; i<number; i++) {
        parr[i] = &arr[i];
    }
    for (int i=0; i<number; i++) {
        cout << "parr[i] =" << parr[i] << endl;
        cout << "*parr[i]= " << *parr[i] << endl;
    }

    cout << "-----charactor-----" << endl;
    const char* name[2] = {
        "zhaocong",
        "xuli"
    };
    for (int i=0; i<2; i++) {
        cout << "names[" << i << "]=" << name[i] << endl;
    }
    return 0;
}
