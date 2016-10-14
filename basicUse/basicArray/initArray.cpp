#include <iostream>
using namespace std;

int arr1[3] = {1,2,3};
int arr2[3] = {11};

int main () {
    for (int i=0; i<3; i++) {
        cout << "arr1:" << arr1[i] << endl;
        cout << "arr2:" << arr2[i] << endl;
        cout << "--------------------" << endl;
    }

    return 0;
}
