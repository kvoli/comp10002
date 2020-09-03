#include <stdio.h>

void display_array(int* vi, int n) {
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

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}



// define:
//          (1) base case [1] [], [-1000000000] []
//          (2) recursive case [1,2] -> [1] -> [1]
//
void rselection_sort(int* vi, int n) {
  if (n < 2) return ;

  int max_idx = 0;
  for (int i = 0; i < n; ++i)
    max_idx = vi[i] > vi[max_idx] ? i : max_idx;
  swap(vi + n-1, vi + max_idx);

  return rselection_sort(vi, n-1);
}



int main(int argc, char const* argv[])
{
  
  int vi[1000];
  int n = read_array(vi);
  display_array(vi, n);
  rselection_sort(vi, n);
  display_array(vi, n);

  return 0;
}
