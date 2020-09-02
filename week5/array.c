#include <stdio.h>


int main(int argc, char const* argv[])
{
  int a[] = {1,2,3,4,5};

  int num_3 = *(a+2);

  int other_way = a[2];

  printf("raw method %d normal indexing: %d", num_3, other_way);

  return 0;
}
