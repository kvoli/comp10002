#include <stdio.h>

int is_subset(int A[], int B[], int nA, int nB);
void run_tests();

int A[] = {3,4,3,8,5};
int B[] = {3,8,4,9,6,7,5,3};
const int tests[5][2] = {{4,4},{4,5},{5,5},{5,6},{5,8}};
const int n = 5;

int
main(int argc, char *argv[]) {
  run_tests();
	return 0;
}


int sol(int A[], int B[], int nA, int nB) {
  for (int i = 0; i < nA; ++i) {
    int check = 0;
    for (int j = 0; j < nB; ++j)
      check = A[i] == B[j] ? 1 : check == 1 ? 1 : 0;
    if (!check) return 0;
  }
  return 1;
}


 int is_subset(int A[], int B[], int nA, int nB) {
}


void run_tests() {
  for (int i = 0; i < n; ++i) {
    int a = sol(A, B, tests[i][0], tests[i][1]);
    int b = is_subset(A, B, tests[i][0], tests[i][1]);
    if (a != b)
      printf(
          "Incorrect testcase: nA=%d,nB=%d - returned %d when should return %d\n",
          tests[i][0], tests[i][1],b, a);
    else
      printf("passed testcase %d\n", i + 1);
  }
}
