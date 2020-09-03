#include <stdio.h>

void pointer_stuff();


int main(int argc, char const* argv[])
{
  pointer_stuff();
  return 0;
}

void pointer_stuff() {
  
  // type is a pointer to an integer
  // it holds an address
  int normal_variable = 5;
  int* pointer;

  // get the address of normal_variable and put it into pointer
  pointer = &normal_variable;

  // dereferencing *
  int dereferenced  = *pointer;

  printf("Normal Variable (int) is = %d\n", normal_variable); // = 5
  printf("Pointer (int*)  = %p\n", pointer); // = x0EFe
  printf("Derefenced (int)  = %d\n", dereferenced); // = 5



}
