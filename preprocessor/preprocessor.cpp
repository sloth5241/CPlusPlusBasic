#include <iostream>
using namespace std;

//define 预处理常量
#define PI 3.1415926
//函数宏
#define MIN(a,b) (((a)<(b)) ? a : b)

int main() {
    //常量
    cout << "PI is :" << PI << endl;
    //函数宏
    cout << "min is:" << MIN(10,20) << endl;
    //预定义宏
    cout << "__DATE__:" << __DATE__ << endl;
    cout << "__LINE__:" << __LINE__ << endl;
    cout << "__FILE__:" << __FILE__ << endl;
    cout << "__STDC__:" << __STDC__ << endl;
    cout << "__TIME__:" << __TIME__ << endl;
    cout << "__cplusplus:" <<__cplusplus << endl;
    cout << "__func__:" << __func__ << endl;
    return 0;
}
