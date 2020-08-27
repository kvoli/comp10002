#include <stdio.h>

int a = 1;
int add(int a, int b);

int main(void) {
  printf("the value of a is %d, the value of %d + %d is %d\n", a, 5, 4, add(5,4));
  return 0;
}


int add(int a, int b) {
    int res;
    printf("the value of a inside the add func is %d\n", a);
    res = a + b;
    return res;
}
