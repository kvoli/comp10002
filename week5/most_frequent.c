#include <stdio.h>


int most_frequent(int* vi, int n);
int read_array(int* vi);

int main(void)
{
  int vi[1000];
  int n = read_array(vi);
  printf("\nMost frequnt element is: %d\n", most_frequent(vi, n));
  return 0;
}


int most_frequent(int* vi, int n) {
  int best = 0, best_val = 0;
  
  for (int i = 0; i < n; ++i) {
    int cur = 0;
    for (int j = 0; j < n; ++j) {
      if (vi[i] == vi[j])
        cur++;
    }

    if (cur > best) {
      best = cur;
      best_val = vi[i]; 
    }
  }

  return best_val;
}

int read_array(int* vi) {
  int i = 0;
  while(scanf("%d", (vi+i)) == 1) 
      i++;
  return i;
  }
