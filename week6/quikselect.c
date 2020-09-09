
#include <stdio.h>

void dvi(int* vi, int n);
void swap(int* a, int* b);
void setvi(int* vi, int n);
void qsel(int* vi, int l, int r, int k);
int partition(int* vi, int l, int r);
int read_array(int* vi);

int main(void) {
  int vi[100];
  int n = read_array(vi);
  dvi(vi, n);
  qsel(vi, 0, n-1, 4);
  dvi(vi, n);
  return 0;
}

void qsel(int* vi, int l,int r, int k) {
  if (k > 0 && k <= r-l+1) {
    int p = partition(vi, l, r);
    if (p - l == k - 1)
      return vi[p];
    if (p - l > k - 1)
      return qsel(vi, l, pos-1, k);
    return qsel(vi, pos+1, r, k-pos+l-1);
  }
  return -1;
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
