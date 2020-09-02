#include <stdio.h>

int ascending_runs(int* vi, int n);
int read_array(int* vi);
void dvi(int* vi, int n);

int main(void)
{
  
  int vi[1000];
  int n = read_array(vi);
  dvi(vi, n);
  printf("ascending runs = %d", ascending_runs(vi, n));

  return 0;
}

int ascending_runs(int* vi, int n) {
  int runs = 1;
  int in_a_run = 0;
  for (int i = 1; i < n; ++i) {
    if (vi[i] >= vi[i-1] && !in_a_run) {
      in_a_run = 1;
      runs++;
      printf("Entering Ascending Run at %d\n", vi[i-1]);
    }
    if (vi[i] < vi[i-1] && in_a_run)
      in_a_run = 0;
  }
  printf("Entering Ascending Run at %d\n", vi[n-1]);
  return runs;
}

void dvi(int* vi, int n) {
  printf("[");
  for (int i = 0; i < n-1; ++i) {
    printf("%d,", vi[i]);
  }
  printf("%d]\n", vi[n-1]);
}

int read_array(int* vi) {
  int i = 0;
  while(scanf("%d", (vi+i)) == 1) 
      i++;
  return i;
  }
