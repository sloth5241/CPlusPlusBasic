#include <iostream>
#include <string>
using namespace std;

void stringCopy(string, string);
void stringLink(string, string);
void stringLen(string);
void stringEmpty(string,string,string);
void line() {
    cout << "--------------------" << endl;
}

int main() {
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    string str4 = "";
    string str5 = " ";

    //复制
    stringCopy(str1, str3);
    line();
    //连接
    stringLink(str1, str2);
    line();
    //求长度
    stringLen(str1);
    line();
    //判断是否为空
    stringEmpty(str1, str4, str5);
    line();
    return 0;
}

void stringCopy(string s1, string s2){
    cout << "s2 = " << s2 << endl;
    s2 = s1;
    cout << "after copy s2 = " << s2 << endl;
}
void stringLink(string s1, string s2){
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s1 + s2 = " << s1+s2 << endl;
}
void stringLen(string s1){
    cout << "s1=" << s1 << endl;
    cout << "s1 length =" << s1.size() << endl;
}
void stringEmpty(string s1, string s4, string s5){
    cout << "s1 = " << s1 << endl;
    cout << "s4 = " << s4 << endl;
    cout << "s5 = " << s5 << endl;
    cout << "s1 is empty:" << s1.empty() << endl;
    cout << "s4 is empty:" << s4.empty() << endl;
    cout << "s5 is empty:" << s5.empty() << endl;
}
