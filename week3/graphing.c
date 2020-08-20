#include <stdio.h>

int main() {
  
  printf("Enter numbers: ");
  int n;
  while (scanf("%d", &n) == 1) {
    printf("%2d |", n);
    for (int i =0 ; i < n; ++i) 
      printf("*");
    printf("\n");
  }
  return 0;
}
