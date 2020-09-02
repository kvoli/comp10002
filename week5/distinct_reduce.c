#include <stdio.h>

int read_array(int* vi);
void dvi(int* vi, int n);
int reduce_distinct(int* vi, int n);
void ssort(int* vi, int n);
void swap(int* a, int* b);

int main(int argc, char const* argv[]) {
  int vi[1000];
  int n = read_array(vi);
  dvi(vi, n);
  ssort(vi, n);
  dvi(vi, n);
  n = reduce_distinct(vi, n);
  dvi(vi, n);

  return 0;
}

int reduce_distinct(int* vi, int n) {
  if (n < 2) return n;
  int i = 1;
  int j = 1;
  while (i < n) {
    if (vi[i] != vi[i-1]) {
      vi[j] = vi[i];
      ++j;
    }
    ++i;
  }
  return j;
}

void ssort(int* vi, int n) {
  if (n < 2)
    return ;
  int max_idx = 0;
  for (int i = 0; i < n; i++)
    max_idx = vi[i] > vi[max_idx] ? i : max_idx;
  swap(&(vi[n-1]), &(vi[max_idx]));
  ssort(vi, n-1);
}

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
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
