//
//  g++ -std=c++11 iterate-over-array.cpp
//
#include <iostream>

int main() {

  int some_ints[6] = {1, 2, 3, 4, 5, 6 };

  for (auto& i : some_ints) {
    i *= i; 
  }
  for (auto  i : some_ints) {
    std::cout << i << std::endl;
  }
  for (auto fib: {1, 1, 2, 3, 5, 8, 13, 21, 34}) {
    std::cout << fib << std::endl;
  }

}
