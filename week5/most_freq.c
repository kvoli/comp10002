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


int most_frequent(int* vi, int n);

int main(int argc, char const* argv[])
{
  int vi[1000];
  int n = read_array(vi);

  display_array(vi, n);
  int mfreq = most_frequent(vi, n);
  printf("Most frequent value is %d\n", mfreq);
  return 0;
}









int most_frequent(int* vi, int n){
  // whats the most frequently occurring element in the array
  // return that element e.g. [1,2,2,2,2]  = 2
  // [1,1,2,2] return smaller of the two
  
  int best_freq = 0;
  int best_number = 0;

  // for each number in the array
  for (int i = 0; i < n; ++i) {
    int current_number = vi[i];
    int current_freq = 0;

    // calculate the frequency of the element in vi[i] (current number)
    for (int j = 0; j < n;++j) {
      if (vi[i] == vi[j]) 
        current_freq ++;
    }

    if (current_freq > best_freq  || ( current_freq == best_freq && current_number < best_number)) {
      best_freq = current_freq;
      best_number = current_number;
    }
  }
  return best_number;
}





















