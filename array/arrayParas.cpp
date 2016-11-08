#include <iostream>
using namespace std;
/*
 *传递数组给函数的方式
 */

int* retArr1(int arr[5], int n) {
    /*
     * 使用数组接收数组
     */
    for(int i=0; i<n; i++) {
        arr[i] += 1;
    }
    return arr;
}

int * retArr2(int *p, int n) {
    /*
     * 使用指针接收数组
     */
    for(int i=0; i<n; i++) {
        p[i] += 100;
    }
    return p;
}

void printArray(int *p, int n) {
   for(int i=0; i<n; i++) {
        cout << p[i] << endl;
   } 
}

int main() {
    try {
        const int n = 5;
        int array0[n] = {1,2,3,4,5};
        cout << "使用数据接收" << endl;
        int *p = retArr1(array0,n); 
        printArray(p, n);

        cout << "使用指针接" << endl;
        int *q = retArr2(array0,n);
        printArray(p, n);
    }
    catch(const char* msg){
        cout << msg << endl;      
    }
    return 0;
}
