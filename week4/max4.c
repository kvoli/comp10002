#include <stdio.h>

int max_2_ints(int a, int b);
int max_4_ints(int a, int b, int c, int d);

int main(void) {
  int a,b,c,d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("the max_4_ints(%d,%d,%d,%d) is %d\n",
      a,b,c,d,max_4_ints(a,b,c,d));
  return 0;
}

int max_2_ints(int a, int b){
  return a > b ? a : b;
}

int max_4_ints(int a, int b, int c, int d) {
  return max_2_ints(max_2_ints(a, b), max_2_ints(c, d));
}
