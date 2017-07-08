#include <iostream>

enum FBB {
  foo =  1,
  bar =  2,
  baz = 42 
};


void print(FBB f) {
  switch(f) {
    case     foo: std::cout << "foo" << std::endl; break;
    case     bar: std::cout << "bar" << std::endl; break;
    case     baz: std::cout << "baz" << std::endl; break;
    default     : std::cout << "?"   << std::endl;
  }
};

int main() {

  FBB fbb;

  print(static_cast<FBB>( 1));
  print(static_cast<FBB>( 2));
  print(static_cast<FBB>(42));
  print(static_cast<FBB>(-9));
}
