#include <iostream>
using namespace std;

const int n = 3;
int arr1[n] = {1,2,3};
int arr2[n] = {11};

int main () {
    try{
        for (int i=0; i<n; i++) {
            cout << "arr1:" << arr1[i] << endl;
            cout << "arr2:" << arr2[i] << endl;
            cout << "--------------------" << endl;
        }
    }
    catch(const char* msg){
        cout << msg << endl;
    }

    return 0;
}
