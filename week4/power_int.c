#include <stdio.h>


int powr(int base, int xp);
int rpowr(int base, int xp);


int main() {

  int base, xp;
  scanf("%d %d",&base, &xp);
  printf("iterative version of %d^%d is %d\n", base, xp, powr(base, xp));
  printf("recursive version of %d^%d is %d\n", base, xp, rpowr(base, xp));

  return 0;
}

int powr(int base, int xp) {
  int res = 1;
  for (int i = 0; i < xp; ++i)
    res *= base;
  return res;
}


// Edge case xp = 0: 1
// Edge case xp = 1: base 

int rpowr(int base, int xp) {

  if  (xp == 0){
    return 1;
  }
  // power(2,4) 2**4 = 2 * power(2, 3) = 2 * 2 * power(2, 2)
  // power(base, xp) = base * power(base, xp-1)
  return base * rpowr(base, xp-1);
}
