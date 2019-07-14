//
//   cl /EHsc /W4 RuleOfFive.cpp
//   g++ -Wall -Wextra RuleOfFive.cpp
//
//
#include <iostream>

class RuleOfFive {

      int num;

   public:
      RuleOfFive(int n);                                   // Constructor
      RuleOfFive(RuleOfFive const &other);                // Copy constructor
      RuleOfFive(RuleOfFive &&other) noexcept;            // Move Constructor
      RuleOfFive& operator=(RuleOfFive const& other);     // Copy Assignment
      RuleOfFive& operator=(RuleOfFive &&other) noexcept; // Move Assignment
};


RuleOfFive::RuleOfFive(int n)
  : num(n)
{
  std::cout << "Constructor, num = " << num << std::endl;
}

RuleOfFive::RuleOfFive(RuleOfFive const &other)
  : num(other.num * 2)
{
   std::cout << "Copy Constructor, num = " << num << std::endl;
}

RuleOfFive::RuleOfFive(RuleOfFive &&other) noexcept {
   num = other.num + 1;
   std::cout << "Move constructor" << std::endl;
}

RuleOfFive& RuleOfFive::operator=(RuleOfFive const& other) {
   num = other.num*3;
   std::cout << "Copy Assignment, num = " << num << std::endl;
   return *this;
}

RuleOfFive& RuleOfFive::operator=(RuleOfFive &&other) noexcept {
   num = other.num*3;
   std::cout << "Move Assignment, num = " << num << std::endl;
   return *this;
}

RuleOfFive F(RuleOfFive r) {
     std::cout << "In F" << std::endl;
     return r;
}

RuleOfFive& G(RuleOfFive &r) {
     std::cout << "In G" << std::endl;
     return r;
}

int main() {

    RuleOfFive obj_1(7);
    RuleOfFive obj_2 = obj_1;

    obj_1 = obj_2;

    obj_2 = F(obj_1);
    obj_1 = G(obj_2);

    std::cout << "Finishing" << std::endl;

    return 0;
}
