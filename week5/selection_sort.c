#include <stdio.h>


// Address = [,,,,,,,,X]
// Pointer = type which holds an address

void selsort(int vi[], int n);
void swap(int *a, int *b);
void dvi(int* vi, int n);

int main(void)
{
  int vi[] = {6,5,4,3,2,1};
  int n = 6;
  dvi(vi, n);
  selsort(vi , n);
  dvi(vi, n);
  return 0;
}

// [5,4,3,2,1]
// i = 0
// [4,3,2,5]
// i = 1
// [3,4,5]
// ...
// [1]

void selsort(int vi[], int n) {
  
  for (int i = 0; i < n-1; ++i) {
    int min_idx = i;
    for (int j = i+1; j < n; j++) {
      if (vi[j] < vi[min_idx]) 
        min_idx = j;
    }
    swap(&(vi[i]), &(vi[min_idx]));
  }
}


void selsort(int vi[], int n) {
  
  for (int i = n-1; i >= 0; --i) {
    int max_idx = i;
    for (int j = 0; j <= i; j--) {
      if (vi[j] > vi[max_idx]) 
        max_idx = j;
    }
    swap(&(vi[i]), &(vi[max_idx]));
  }
}
void swap(int *a, int *b){
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
