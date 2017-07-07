#include <iostream>

class B {

  public:

    void print(std::string const& text) {
      std::cout << text << std::endl;
    }

    virtual void method() {print("B::method");}

};

class D : public B {

  public:
    virtual void method() override {print("D::method");}

};

int main() {

  B* pb = new B;
  B* pd = new D;

  pb -> method();
  pd -> method();

}
