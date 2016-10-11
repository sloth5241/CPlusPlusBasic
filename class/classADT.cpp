#include "classADT.h"
#include <iostream>
using namespace std;

int main() {

    Adder ad(0);
    ad.addNumber(10);
    ad.addNumber(20);
    ad.addNumber(30);
    ad.getTotal();
}
