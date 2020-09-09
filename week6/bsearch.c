#include <stdio.h>

void dvi(int* vi, int n);
void swap(int* a, int* b);
void setvi(int* vi, int n);
int read_array(int* vi);

int main(void) {
  int vi[100];
  int n = read_array(vi);
  dvi(vi, n);

  dvi(vi, n);
  return 0;
}

void dvi(int* vi, int n) {
  printf("[");
  for (int i = 0; i < n-1; ++i) {
    printf("%d,", vi[i]);
  }
  printf("%d]\n", vi[n-1]);
}

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int read_array(int* vi) {
  int i = 0;
  while(scanf("%d", (vi+i)) == 1) 
      i++;
  return i;
}
