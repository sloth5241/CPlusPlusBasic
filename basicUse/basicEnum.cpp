#include <iostream>
using namespace std;
//定义
enum color {red=1, blue, black};

int main() {
    //输出枚举元素
    cout << red << endl;
    //创建枚举对象
    color cc;
    cc = black;
    cout << cc << endl;

    return 0;
}
