#include <iostream>
using namespace std;
/*
 *传递数组给函数的方式
 */

//定义数组
int* retArr1(int arr[5], int n) {
    for(int i=0; i<n; i++) {
        arr[i] += 1;
    }
    return arr;
}

//定义指针
int * retArr2(int *p, int n) {
    for(int i=0; i<n; i++) {
        p[i] += 100;
    }
    return p;
}

int main() {
    int array0[5] = {1,2,3,4,5};
    cout << "使用数据接收" << endl;
    int *p = retArr1(array0,5); 
    for(int i=0; i<5; i++) {
        cout << "retArr1 is:" << p[i] << endl;
    }
    cout << "使用指针接" << endl;
    int *q = retArr2(array0,5);
    for(int i=0; i<5; i++) {
        cout << "retArr2 is:" << q[i] << endl;
    }
    return 0;
}
