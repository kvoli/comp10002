#include <stdio.h>

int pwr(int base, int xp);
int rpwr(int base, int xp);

int main(void) {
  int base, xp;
  scanf("%d %d", &base, &xp);
  printf("%d^%d = %d\n", base, xp, pwr(base, xp));
  printf("%d^%d = %d\n", base, xp, rpwr(base, xp));
  return 0;
}

// edge case = x^0  ==== 1
// edge case = x^1  ==== x


// iter version
int pwr(int base, int xp) {
  // 2^3 = (inter_result) * base
  int res = 1;
  for (int i = 0; i < xp; ++i)
    res *= base;
  return res;
}

// xp >= 0, xp > 0
//
// edge case where xp = 0 = 1 ok
// edge case where xp = 1 = base * rpwr(base, 0) = base * 1 
//      case where xp = t = base * rpwr(base, xp-1) ... base, xp-1 times *
int rpwr(int base, int xp) {
  if (xp <= 0)
    return 1;
  return base * rpwr(base, xp-1);
}













