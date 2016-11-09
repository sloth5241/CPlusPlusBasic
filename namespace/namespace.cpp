#include <iostream>
using namespace std;

namespace first{
    void func() {
        cout << "first namespace" << endl;
    }
}

namespace second{
    void func() {
        cout << "second namespace" << endl;
    }
    void test() {
        cout << "this is test" << endl;
    }
}

using namespace first;
int main() {
    func();
    using namespace second;
    test();
    second::func();
    return 0;
}
