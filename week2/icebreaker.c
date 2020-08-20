#include <stdio.h>


// []
// check prev

int main(){

  int *A;
  int profit = 0;

  for (int i = 1; i < n; ++i){
    if (A[i] - A[i-1] > 0){
      profit += A[i] - A[i-1];
    }
  }
  return profit;
}
