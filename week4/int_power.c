#include <stdio.h>

int powerr(int base, int pow); 


int main(int argc, char const* argv[])
{
  int base, power; 
  printf("Enter the base and the exponent: ");
  scanf("%d %d", &base, &power);
  printf("%d^%d = %d\n", base, power, powerr(base, power));
  return 0;
}

int powerr(int base, int pow) {
  int res = 1;
  while (pow-- > 0)
    res *= base;
  return res;
}
