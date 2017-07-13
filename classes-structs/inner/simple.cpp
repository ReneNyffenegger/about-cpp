#include <iostream>

void p(const char* txt) {
  std::cout << txt << std::endl;
}

class Outer {
  public:
    Outer() {p("Outer::Outer");};

    class Inner {
      public:
        Inner() {p("Outer::Inner");};

        void mi(Outer o) {
          p("Outer::Inner::mi");

          //  Note: Outer::Inner is automatically a friend of
          //  Outer. So, it can call private methods of Outer:
          o.mo_private();
        };

    };

    void mo(Inner i) {
      p("Outer::mo");
      i.mi(*this);

    }

  private:
    void mo_private() {p("Outer::mo_private");}

};


int main() {

  Outer outer;
  Outer::Inner inner;

  outer.mo(inner);
  inner.mi(outer);

}
