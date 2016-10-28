#include <iostream>
#include<cstring>
using namespace std;
const int n = 5;

void ergodicCharArray(char* c1, char* c2){
    for(int i=0; i<n; i++){
        cout << "char is:" << c1[i] << endl;
    }  
    for(int i=0; i<n; i++){
        cout << "char is:" << c2[i] << endl;
    }  
}

char* modifyCharArray(char* c1){
    c1[0] = 'm';
    c1[1] = 'o';
    c1[2] = 'd';
    c1[3] = 'i';
    c1[4] = 'f';
    c1[5] = 'y'; 
    return c1;
}

char* strcatCharArray(char* c1, char* c2){
    strcat(c1,c2);
    return c1;
}

int getCharArrayLength(char* c1){
    return strlen(c1);
}

int main() {
    //字符数组
    char char1[n] = "zhao";
    char char2[n] = "cong";
    //遍历字符数组
    ergodicCharArray(char1, char2);

    //连接字符数组
    char* retStrcat = strcatCharArray(char1, char2); 
    cout << "连接后的字符串为:" << retStrcat << endl;

    //修改字符数组元素
    char* retModify = modifyCharArray(char1);
    cout << "修改后的字符数组为:" << retModify << endl;

    //字符数组长度
    cout << char1 << endl;
    int char1Length = getCharArrayLength(char1);
    cout << "char1的长度为:" << char1Length << endl;

    return 0;
}
