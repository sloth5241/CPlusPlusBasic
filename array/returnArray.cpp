#include <iostream>
using namespace std;

int* getArray() {
    /*
     * C++ 不支持在函数外返回局部变量的地址，
     * 除非定义局部变量为 static 变量。
     */
    static int arr[4] = {12,23,43,5};
    return arr; 
}

int main() {
    int *p;
    p = getArray(); 

    for (int i=0; i<4; i++) {
        cout << p[i] << endl;
    }
    return 0;
}

