#include <iostream>
using namespace std;

class Box {

    public :
        Box() {
            cout << "creat" << endl;
        }

        ~Box() {
            cout << "delete" << endl;
        }
};

int main() {
    Box* p = new Box[5];

    delete [] p;
    return 0;
}
