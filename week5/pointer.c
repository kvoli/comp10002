#include <stdio.h>


// a = a^a 
// dereference: go to the address of a variable (pointer) and get the value out
// & = gets the address of a value
void plus(int* a){
  *a = *a + *a;
}



int main(int argc, char const* argv[])
{
  int a = 2;
  printf("a is currently %d\n", a);
  plus(&a);
  printf("a is currently %d\n", a);
  return 0;
}
