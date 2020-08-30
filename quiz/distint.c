#include <stdio.h>

int numdistinct(int x1, int x2, int x3);
int sol(int x1, int x2, int x3);
void test();

const int tests[5][3] = {{1, 1, 1}, {1, 2, 3}, {1, 3, 1}, {1, 1, 3}, {1, 3, 3}};
const int n = 5;

int main(void) {
  test();
  return 0;
}

int numdistinct(int x1, int x2, int x3) {
      if (x1 == x2 && x2 == x3) {
        return 1;
    } else if (x1 != x2 && x2 != x3 && x1 != x3) { 
        return 3;
    } else {
        return 2;
    }
}

int sol(int x1, int x2, int x3) {
  if (x1 == x2 && x2 == x3)
    return 1;
  if (x1 != x2 && x2 != x3 && x1 != x3)
    return 3;
  return 2;
}

void test() {
  for (int i = 0; i < n; ++i) {
    int a = sol(tests[i][0], tests[i][1], tests[i][2]);
    int b = numdistinct(tests[i][0], tests[i][1], tests[i][2]);
    if (a != b)
      printf(
          "Incorrect testcase: %d,%d,%d - returned %d when should return %d\n",
          tests[i][0], tests[i][1], tests[i][2], b, a);
    else
      printf("passed testcase %d\n", i + 1);
  }
}
