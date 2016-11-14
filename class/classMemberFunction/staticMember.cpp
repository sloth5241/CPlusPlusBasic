#include <iostream>
#include "staticMember.h"
using namespace std;

const int Account::nameSize;
int Account::arr[nameSize] =  {1};
int main() {
    cout << "st namesize:" << Account::nameSize << endl;
    cout << "st arr[0]:" << Account::arr[0] << endl;
}
