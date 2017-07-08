#include <iostream>

enum E {
  foo, bar, baz
};

void f(int p) {
  std::cout << "f: int " << p << std::endl; 
}

void f(E   p) {
  std::cout << "f: E " << p << std::endl; 
}


int main() {
  int i = 10;
  E   e = bar;

  f(i);
  f(e);
}
