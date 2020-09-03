#include <stdio.h>


void display(int* a, int n);

int main(int argc, char const* argv[])
{
  int nums[10];
  display(nums, 10);

  return 0;
}

void display(int* a, int n) {

  for (int i =0 ; i < n; i++)
    printf("%d ", a[i]);
}
