#include <iostream>
#include "staticMember.h"
using namespace std;

double Account::m_rate = 0.59;
const char Account::name[nameSize] = "Savings Account";
int main() {
   Account ac(100, "zhaocong"); 
   cout << "返回静态成员" << ac.getRate() << endl;
   cout << "Account::getRate():" << Account::getRate() << endl;
}
