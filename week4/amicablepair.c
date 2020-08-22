#include <stdio.h>

int amicable_pair(int a, int b);
int factor_sum(int a);

int main(int argc, char const* argv[])
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  if (amicable_pair(a,b)) {
    printf("%d and %d are an amicable_pair", a, b);
  } else {
    printf("%d and %d are not an amicable_pair", a, b);
  }

  return 0;
}

int amicable_pair(int a, int b) {
  return factor_sum(a) == b && factor_sum(b) == a;
}

int factor_sum(int a) {
  int sum = 0;

  for (int i = 1 ; i*i <= a; ++i)
    sum += a % i ? i : 0;

  return sum;
}
