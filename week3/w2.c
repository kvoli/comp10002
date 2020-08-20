#include <stdio.h>

int main(int argc, char** argv) {

  int x, i;

  i = 0;

  // post increment/decement
  x = i++;

  printf("x is now: %d, i is now: %d\n", x, i);

  i = 0;


  // pre increment/decrement
  x = ++i;

  printf("x is now: %d, i is now: %d", x, i);

  return 0;
}
