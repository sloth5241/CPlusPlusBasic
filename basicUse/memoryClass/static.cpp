#include <iostream>
using namespace std;

void func(void);
static int sum = 12;    //全局变量不可以命名为count,容易产生歧义

int main() {
    do {
        func(); 
    }
    while (sum--);

    return 0;
}

void func() {

    static int number = 0;
    number++;
    cout << number << " : " << sum << endl;
}

