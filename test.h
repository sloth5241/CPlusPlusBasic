#ifndef test_h
#define test_h
#endif /*test_cpp*/

#include <iostream>
using namespace std;

class Line
{
   public:
      int getLength( void );
      Line( int len );             // 简单的构造函数
      Line( const Line &obj);  // 拷贝构造函数
      ~Line();                     // 析构函数
      int width;

   private:
      int *ptr;
};
