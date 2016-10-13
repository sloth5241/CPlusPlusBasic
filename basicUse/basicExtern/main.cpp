#include <iostream>
//#include "externDefine.h"
using namespace std;
extern int x;
extern int g_age;
int main() {
    //variable come from .cpp file
    cout << "x come from cpp:" << x << endl; 

    //variable come from .h file
    g_age = 90; 
    cout << "g_age come from .h:" << g_age << endl;
    return 0;
}
