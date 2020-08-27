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







// sum of factors for 10 is: 1, 2, 5 = 8



int amicable_pair(int a, int b) {
  return factor_sum(a) == b && factor_sum(b) == a;
}

int factor_sum(int a) {
  int sum = 0;

  for (int i = 1 ; i < a; ++i)
    if (a % i == 0) {
      sum += i;
    } 

  return sum;
}










1
