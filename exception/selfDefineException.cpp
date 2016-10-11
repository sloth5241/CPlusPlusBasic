#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception{
  const char * what () {
      return "C++ Exception";
    }
};

int main () {
    try
    {
        throw MyException();
    }
    catch(MyException& e)
    {
        cout << "MyException caught" << endl;
        cout << e.what() << endl;
    }
}
