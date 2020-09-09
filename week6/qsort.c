
#include <stdio.h>

void dvi(int* vi, int n);
void swap(int* a, int* b);
void setvi(int* vi, int n);
void qsort(int* vi, int l, int r);
int partition(int* vi, int l, int r);
int read_array(int* vi);

int main(void) {
  int vi[100];
  int n = read_array(vi);
  dvi(vi, n);
  qsort(vi, 0, n-1);
  dvi(vi, n);
  return 0;
}


void qsort(int* vi, int l,int r) {
  if (l < r) {
    int p = partition(vi, l, r);
    qsort(vi, l, p-1);
    qsort(vi, p+1, r);
  }
}
int partition(int* vi, int l, int r) {
  int p = vi[r];
  int i = l - 1;
  for (int j = l; j < r; ++j) {
    if (p > vi[j]) {
      ++i;
      swap(vi+i, vi+j);
    }
  }
  swap(vi+r, vi+i+1);
  return ++i;
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
