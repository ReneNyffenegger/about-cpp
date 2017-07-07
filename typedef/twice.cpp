#include <iostream>
#include <string>

class U {
  public:

    void Print(std::string const& s) const {
      std::cout << s << std::endl;
    }
};


typedef U V;
typedef U W;


void func(V const& v) {
  v.Print("V");
}

// V und W are the same type
// so, func(U const&) is defined twice!
// Compile Error!
void func(W const& w) {
  w.Print("W");
}

int main() {

  V v;
  W w;

  func(v);
  func(w);

}
