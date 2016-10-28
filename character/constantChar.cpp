#include<iostream>
using namespace std;
const int n = 4;

void ergodicChar(const char* c1, char const* c2){
    /*
     *遍历常量字符串
     */
    for(int i=0; i<n; i++){
        cout << "c1[" << i << "] is:" << c1[i] << endl;
    }
    for(int i=0; i<n; i++){
        cout << "c2[" << i << "] is:" << c2[i] << endl;
    }
}

void modifyElement(const char* c1, char const* c2){
    /*
     *无法修改字符串元素
     */
    //c1[0] = '1'; 
    //c2[0] = '1';
}

int charLength(const char* c1){
    /*
     *字符串长度
     */
    return strlen(c1);
}

const char* linkChar(const char* c1, const char* c2){
    /*
     *字符串常量拼接
     *这个方法高大上啊
     */
    int length = sizeof(c1) + sizeof(c2) + 1;
    char* concatstring = (char*)malloc(length * sizeof(char));
    memset(concatstring, 0, length);
    strcat(concatstring, c1);
    strcat(concatstring, c2);
    char* temp = concatstring;
    free(concatstring);
    return temp;
}

int main() {
    const char* c1= "zhao";    
    char const* c2 = "cong";

    cout << "c1 is:" << c1 << endl;
    cout << "c2 is:" << c2 << endl;
    
    //遍历字符串     
    ergodicChar(c1,c2);
    //修改字符串元素
    modifyElement(c1,c2);
    //求字符串长度
    cout << "c1 长度:" << charLength(c1) << endl;
    //连接字符串
    cout << "连接后字符串为:" << linkChar(c1,c2) << endl; 
    return 0;
}


