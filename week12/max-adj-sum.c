#include <stdio.h>

int read_array(int* vi);
int max_adj_sum(int* vi, int n);
void dvi(int* vi, int l, int r);

int main() {
  int vi[100], n;
  n = read_array(vi);
  printf("best is: %d\n", max_adj_sum(vi, n));
  return 0;
}

// max contig sub array sum
int max_adj_sum(int* vi, int n) {
  int best = 0, cur_total;
  for (int i = 0; i < n; ++i) {
    cur_total = 0;
    for (int j = i; j < n; ++j) {
      cur_total += vi[j];
      dvi(vi, i, j);
      best = best > cur_total ? best : cur_total;
    }
  }
  return best;
}

void dvi(int* vi, int l, int r) {
  printf("[");
  for (int i = l; i < r; ++i) {
    printf("%d,", vi[i]);
  }
  printf("%d]\n", vi[r]);
}

int read_array(int* vi) {
  int i = 0;
  while(scanf("%d", (vi+i)) == 1) 
      i++;
  return i;
}
