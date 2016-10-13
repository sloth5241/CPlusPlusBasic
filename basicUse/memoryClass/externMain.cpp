#include <iostream>
using namespace std;

int total = 100;
extern void getTotal(void);

int main() {
    getTotal();
    return 0;
}
