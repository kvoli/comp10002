#include <stdio.h>

int partition(int* vi, int l, int r);
void quick_sort(int* vi, int l, int r);
void dvi(int* vi, int n);
void swap(int* a, int* b);
void setvi(int* vi, int n);
int read_array(int* vi);


int main(int argc, char const* argv[])
{
  int vi[1000];
  int n = read_array(vi);
  dvi(vi, n);
  quick_sort(vi, 0, n-1);
  dvi(vi, n);
  return 0;
}

// partition everything less than p to the left, and everything thats greater to the right
int partition(int* vi, int l, int r) {
  int p = vi[r];
  // variable to keep track of how many elements are less than p
  int i = l - 1;

  for (int j = l; j < r; ++j) {
    // smaller than our partition - needs to go to the left of p
    if (vi[j] < p) {
      ++i;
      swap(vi + i, vi + j);
    }
  }
  swap(vi + r, vi + i + 1);
  return i + 1;
}

void quick_sort(int* vi, int l, int r) {
  if (l < r) {
    // we get the index p, which corresponds to the correct index of our partition in the sorted array
    int p = partition(vi, l, r);
    // sort to the left of our partititon
    quick_sort(vi, l , p-1);
    // sort to the right of our partititon
    quick_sort(vi, p+1, r);
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

int read_array(int* vi) {
  int i = 0;
  while(scanf("%d", (vi+i)) == 1) 
      i++;
  return i;
}
