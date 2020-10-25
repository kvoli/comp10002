#include <stdio.h>

int read_array(int* vi);
int subsetsum(int* vi, int n, int k);
void dvi(int* vi, int n);

int main(int argc, char const* argv[])
{
  int vi[100], n, k;
  scanf("%d", &k);
  n = read_array(vi);
  printf("Subset adds to k: %s\n", subsetsum(vi, n, k) ? "YES" : "FALSE");
  
  return 0;
}

int subsetsum(int* vi, int n, int k) {
  if (k == 0) return 1;
  if (n == 0) return 0;
  return subsetsum(vi, n-1, k-vi[n-1]) || subsetsum(vi, n-1, k);
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
