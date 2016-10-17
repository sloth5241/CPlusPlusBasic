#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int *p = NULL;
    cout << "-----p初始为空-----" << endl;
    cout << "p=" << p << endl; 
    
    cout << "-----p指向a-----" << endl;
    p = &a;
    cout << "&a=" << &a << endl;
    cout << "p=" << p <<endl;
    cout << "*p=" << *p << endl;
    cout << "-----p重新置为空-----" << endl;
    p = NULL;
    cout << "p=" << p <<endl;
    if (p) {
        cout << "*p=" << *p << endl;
    }else{
        cout << "p=" << p << endl;
        cout << "p is NULL" << endl;
    }
    return 0;
}
