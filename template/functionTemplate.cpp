#include <iostream>
#include <string>
using namespace std;

template <typename T>
T const& Max(T const& a, T const& b) {

    return a>b?a:b;
}

int main() {

    int a = 10;
    int b = 20;
    cout << "max value is:" << Max(a,b) << endl;

    double i = 1.123;
    double j = 8923.123;
    cout << "max value is:" << Max(i,j) << endl;

    string s1 = "zhaocong";
    string s2 = "xuli";
    cout << "max value is:" << Max(s1,s2) << endl;

    return 0;
}
