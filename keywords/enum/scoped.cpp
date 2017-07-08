// gcc -std=c++11 scoped.cpp

enum class FBB {
  foo,
  bar,
  baz
};

int main() {

// FBB fbb =      bar;  // --> error: ‘bar’ was not declared in this scope
   FBB fbb = FBB::bar;  // Need to fully qualify scoped enum values

}
