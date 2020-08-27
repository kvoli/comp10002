#include <stdio.h>


// factor_sum(10) = sum(1,2,5) = 8

int factor_sum(int x) {
  // % 13 / 5 = 2, remainder = 3
  // 13 % 5 = 3
  // 20 % 5 = 0
  int sum = 1;
  for (int num = 2; i < x; ++i) {
    if (x % num == 0)
      sum += num;
  }
  return sum;
}

// factor_sum(x) == y && factor_sum(y) == x
