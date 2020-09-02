#include <stdio.h>

void rsel(int* vi, int n);
void sel(int* vi, int n);
void rins(int* vi, int n);
void ins(int* vi, int n);
void dvi(int* vi, int n);
void swap(int* a, int* b);
void setvi(int* vi, int n);

int main(int argc, char const* argv[])
{
  int n = 10;
  int vi[10];
  // test selection sort
  printf("\nTest iterative selection sort\n");
  setvi(vi, n);
  dvi(vi, n);
  sel(vi, n);
  dvi(vi, n);

  // test recursive selection sort
  printf("\nTest recursive selection sort\n");
  setvi(vi, n);
  dvi(vi, n);
  rsel(vi, n);
  dvi(vi, n);

  // test insertion sort
  printf("\nTest iterative insertion sort\n");
  setvi(vi, n);
  dvi(vi, n);
  ins(vi, n);
  dvi(vi, n);

  // test recursive insertion sort
  printf("\nTest recursive insertion sort\n");
  setvi(vi, n);
  dvi(vi, n);
  rins(vi, n);
  dvi(vi, n);

  return 0;
}

// [3,2,1] first recursive call 3 max n = 3
// [1,2] second recursive call, 2 max n = 2
// [1] second recursive call, 2 max n = 2
void rsel(int* vi, int n) {
  if (n < 2)
    return;
  int max_idx = 0;

  for (int i = 0; i < n; ++i)
    max_idx = vi[i] > vi[max_idx] ? i : max_idx;

  swap(&(vi[max_idx]), &(vi[n-1]));
  rsel(vi, n-1);
}

void selsort(int vi[], int n) {
  
  for (int i = 0; i < n-1; ++i) {
    int min_idx = 0;
    for (int j = i+1; j < n; j++) {
      if (vi[j] < vi[min_idx]) 
        min_idx = j;
    }
    swap(&(vi[i]), &(vi[min_idx]));
  }
}
void sel(int* vi, int n) {
  int i, j, min_idx;
  for (i = 0; i < n-1; ++i) {
    min_idx = i;
    for (j = i+1; j < n; j++) {
      if (vi[j] < vi[min_idx])
        min_idx = j;
    }
    swap(&(vi[min_idx]), &(vi[i]));
  }
}

void rins(int* vi, int n) {
  if (n < 2) 
    return;
  rins(vi, n-1);
  int key = vi[n-1];
  int j = n-2;
  while (j >= 0 && vi[j] > key) {
    vi[j+1] = vi[j];
    j -= 1;
  }
  vi[j+1] = key;
}

void ins(int* vi, int n) {
  int i, j, key;
  for (i = 0; i < n; ++i) {
    key = vi[i];
    j = i-1;
    while (j >= 0 && vi[j] > key) {
      vi[j+1] = vi[j];
      j -= 1;
    }
    vi[j+1] = key;
  }
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

void setvi(int* vi, int n) {
  for (int i = 0; i < n; ++i) {
    vi[i] = n - i;
  }
}
