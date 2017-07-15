#include <stdio.h>

#define TQ84_PRINTF(FORMAT, ...) printf("tq84: " FORMAT "\n", __VA_ARGS__)

int main() {

  TQ84_PRINTF("%d", 42);
  TQ84_PRINTF("%s, %s", "Hello", "world");
  TQ84_PRINTF("%d %f %s", 99, 3.14, "An int and a float");

}
