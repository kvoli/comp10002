#include <stdio.h>

int max_2_ints(int a, int b);


int main() {

  int a, b;
  printf("Enter two integers: ");
  scanf("%d%d", &a,&b);
  printf("max_2_ints(%d, %d) = %d\n", a, b, max_2_ints(a,b));
  ;
}   


int max_2_ints(int a, int b) {
  return a > b ? a : b;
}
