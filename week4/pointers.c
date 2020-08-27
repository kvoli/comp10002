#include <stdio.h>

int main(int argc, char const* argv[])
{
  int x = 1; // the normal way

  // *_1  : type declaration - int* char* double*
  // *_2  : dereferencing pointers int* t;
  // &    : gets the address of a variable (note cannot already an address)
  
  int* pointer_x = &x; // hold the address of an integer, more specifically the address of x

  printf("x is %d, pointer to x is: %p\n", x, pointer_x);
  
  pointer_x += 5; // dereference - go to the address of pointer_x, look inside and add 5

  printf("x is %d, pointer to x is: %p\n", x, pointer_x);
  return 0;
}
