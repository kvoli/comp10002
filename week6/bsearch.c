#include <stdio.h>

void dvi(int* vi, int n);
void swap(int* a, int* b);
void setvi(int* vi, int n);
int read_array(int* vi);
int bsearch(int* vi, int low, int high, int key);

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

int left_most(vi, l, mid) {
  int key = vi[mid];
  int i  = mid;
  while (vi[i] == key && i > 0) 
    --i;
  return i;
}
// return the first index of the search key
int bsearch(int* vi, int low, int high, int key) {

  if (l > r) 
    return - 1;

  int mid = (high + low) / 2;

  if (key == vi[mid]) {
    // found the key
    return left_most(vi, l, mid);
  }

  if (key < vi[mid]) {
    // to the left hand side
    bsearch(vi, low, mid-1, key);
  }

  if (key > vi[mid]) {
    // to the right hand side
    bsearch(vi, mid+1, high, key);
  }
}

























