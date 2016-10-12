#include <iostream>
using namespace std;

int main() {

    char* p = NULL;
    p = new char[20];

    p[1] = 'z';
    cout << p[1] << endl;

    delete [] p;
    cout << p[1] << endl;
    return 0;
}
