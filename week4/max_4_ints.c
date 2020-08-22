#include <stdio.h>

int max_2_ints(int a, int b);
int max_4_ints(int a, int b, int c, int d);

int main() {

  int a, b, c, d;
  printf("Enter four integers: ");
  scanf("%d%d%d%d", &a,&b,&c,&d);
  printf("max_4_ints: (%d, %d, %d, %d) = %d\n", a, b, c, d, max_4_ints(a,b,c,d));
  ;
}   


int max_2_ints(int a, int b) {
  return a > b ? a : b;
}

int max_4_ints(int a, int b, int c, int d) {
  return max_2_ints(max_2_ints(a,b), max_2_ints(c,d));
}
