#include <iostream>
#include <ctime>
using namespace std;

int *getFromFunc();
int* deliverToFunc(int *, int *);

int main() {
    cout << "-----get from function-----" << endl; 
    int *p = getFromFunc();
    for(int i=0; i<5; i++) {
        cout << "value is:"  << *(p+i) << endl;
    }

    cout << "-----deliver To Func-----" << endl;
    int arr[5] = {10,20,30,40,50};
    int a = 5;
    int *q = NULL;
    q = deliverToFunc(arr, &a); 
    for (int i=0; i<5; i++) {
        cout << q[i] << endl;
    }
    return 0;
}

int *getFromFunc() {
    static int arr[5] = {1,2,34,12,32};
    return arr; 
}

int* deliverToFunc(int *parr, int *num) {
    
    for (int i=0; i<*num; i++){
        parr[i]+=100;
        cout << parr[i] << endl;
    }
    return parr;
    
} 

