#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int* alloc_int() {
  int* new_int = (int*)malloc(sizeof(int));
  assert(new_int != NULL);
  return new_int;
}

int main(int argc, char const* argv[])
{
  int* new_int = alloc_int();
  *new_int = 5;
  printf("%d", *new_int);
  return 0;
}
