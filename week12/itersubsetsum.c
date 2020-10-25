#include <stdio.h>

#define TRUE 1
#define FALSE 0

int read_array(int* vi);
int subsetsum(int* vi, int n, int k);
void dvi(int* vi, int n);

int main()
{
  int vi[100], n, k;
  scanf("%d", &k);
  n = read_array(vi);
  printf("Subset adds to k: %s\n", subsetsum(vi, n, k) ? "YES" : "FALSE");
  
  return 0;
}


int subsetsum(int* vi, int n, int k) {
  int dp[n+1][k+1];

  // set dp column and row 0
  for (int i = 0; i <= n; ++i) dp[i][0] = TRUE;
  for (int j = 1; j <= k; ++j) dp[0][j] = FALSE;

  // 
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= k; ++j) {
      if (j < vi[i-1])
        dp[i][j] = dp[i-1][j];
      if (j >= vi[i-1])
        dp[i][j] = dp[i-1][j] || dp[i-1][j - vi[i-1]];
    }
  }
  return dp[n][k];
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
