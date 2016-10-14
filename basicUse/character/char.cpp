#include <iostream>
using namespace std;
/*
 *字符串的两种定义方法
 */
int main() {
    //可以修改字符串元素
    char c1[5] = "zhao";
    char c2[5] = "cong";
    c1[3] = '1';
    cout << c1 << " " << c2 << endl;

    const char* c11 = "xu";
    const char* c22 = "li";
    cout << c11 << " " << c22 << endl;

    strcat(c1,c2);
    cout << "连接后c1长度:" << c1 << endl;

    int len = strlen(c1);
    cout << "c1 length:" << len << endl;
    return 0;
}
