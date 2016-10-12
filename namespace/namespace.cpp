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
}

using namespace first;
int main() {
    func();

    second::func();
    return 0;
}
