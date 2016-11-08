/*
 * const 的使用
 */
#include<iostream>
#include<string>
using namespace std;

int main() {
    try{
       string str0 = "zhaocong"; 
       string str1 = "hello zhaocong ";
       const string* p1 = &str0;
       string* const p2 = &str0;
    
       //*p1 = "xuli";
       *p2 = "xuli";
       cout << *p2 << endl;
       //p2 = &str1;
    }
    catch(const char* msg) {
        cout << msg << endl;
    }
}
