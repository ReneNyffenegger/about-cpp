//
//  g++ -std=c++11 auto.cpp && ./a.out
//
#include <iostream>
#include <typeinfo>

void print(char         p) {std::cout << "char:          " << p << std::endl;}
void print(double       p) {std::cout << "double:        " << p << std::endl;}
void print(float        p) {std::cout << "float:         " << p << std::endl;}
void print(const char*  p) {std::cout << "const char*    " << p << std::endl;}
void print(int          p) {std::cout << "int:           " << p << std::endl;}
void print(long         p) {std::cout << "long:          " << p << std::endl;}
void print(unsigned int p) {std::cout << "unsigned int:  " << p << std::endl;}


int main() {

  auto c = 'f';
  auto d = 3.8;
  auto f = 1.3f;
  auto i = 42;
  auto l = 100000000000;
  auto s = "hello world";
  auto u = 99u;

  print(c);
  print(d);
  print(f);
  print(i);
  print(l);
  print(s);
  print(u);

}
