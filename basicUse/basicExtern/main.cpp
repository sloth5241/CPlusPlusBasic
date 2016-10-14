#include <iostream>
using namespace std;
extern int x;

int main() {
    int i =10;
    int j =20;
    cout << "this is going to bomb!,please retreat!!!" << endl;
    std::cout << "x come from cpp:" << x << std::endl;
    return 0;
}
