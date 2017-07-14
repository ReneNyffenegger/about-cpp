#include <iostream>

class Outer {

  public:
  class Inner {
    friend class Outer;
      Inner(int d); 
    public:
      int m_d;
  };

  Inner makeInner();

};

Outer::Inner Outer::makeInner() {
  return Inner(42);
}

Outer::Inner::Inner(int d) : m_d(d) {}

int main() {

  Outer        outer;
  Outer::Inner inner = outer.makeInner();

  std::cout << inner.m_d << std::endl;

}
