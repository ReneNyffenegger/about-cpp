//
//  g++ -std=c++11 based.cpp
//
#include <iostream>

enum ENUM_char  : char  { a, b, c }; 
enum ENUM_short : short { d, e, f };
enum ENUM_int   : int   { g, h, i };
enum ENUM_long  : long  { j, k, l };

int main() {

  ENUM_char  ec = a;
  ENUM_short es = d;
  ENUM_int   ei = i;
  ENUM_long  el = j;

  std::cout << sizeof(ec) << std::endl; // 1
  std::cout << sizeof(es) << std::endl; // 2
  std::cout << sizeof(ei) << std::endl; // 4
  std::cout << sizeof(el) << std::endl; // 8

}
