#include <iostream>
using namespace std;

int main() {
    try{
        const char* c1 = "zhaocong";
        cout <<" c1 is a const char" << endl;
        cout << "size of c1 :" << sizeof(c1) << endl; 
        cout << "strlen of c1: " << strlen(c1) << endl;

        cout << "------------------------" << endl;

        char c2[20] = "zhaocong";
        cout <<" c2 is a array char" << endl;
        cout << "sizeof c2:" << sizeof(c2) << endl;
        cout << "strlen c2:" << strlen(c2) << endl;
    }
    catch(const char* msg) {
        cout << msg << endl;
    }

}
