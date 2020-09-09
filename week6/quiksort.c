#include <stdio.h>

void dvi(int* vi, int n);
void swap(int* a, int* b);
void setvi(int* vi, int n);
int partition(int* vi, int l, int r);
void quick_sort(int* vi, int l, int r);
int read_array(int* vi);

int main()
{
  int vi[1000];
  int n = read_array(vi);
  dvi(vi, n);
  quick_sort(vi, 0, n-1);
  dvi(vi, n);
  return 0;
}


// This function will find a partition element and move it into its correct spot, returning that index
int partition(int* vi, int l, int r) {
  int i = l - 1; // = -1 when we start - (keeps track of the number of elements less than p)
  int p = vi[r]; // the element we want to partition our array around 
  // loop over every element up until our last element
  // move every element < p to the left hand side of the array and increment i by 1
  for (int j = l; j < r; ++j) {
    if (vi[j] < p) {
      i++;
      swap(vi + i, vi + j);
    }
  }
  swap(vi + i + 1, vi + r);
  return i + 1;
}



void quick_sort(int* vi, int l, int r) {
  if (l < r) {
    // everything >p is on the right hand side
    // everything <p is on the left hand side
    int p = partition(vi, l , r);
    quick_sort(vi, l, p-1);
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
