#include <stdio.h>


int read_array(int* vi);
void swap(int* a, int* b);
void display_array(int* vi, int n);
void selection_sort(int* vi, int n);



int main(int argc, char const* argv[])
{
  
  int vi[100];
  int n = read_array(vi);
  display_array(vi, n);

  selection_sort(vi, n);

  display_array(vi, n);

  return 0;
}







void selection_sort(int* vi, int n) {
  
  // outer loop is going to swap the minimum element remaining with the first element in my array
  // inner loop is going to find the minimum element
  //
  // [5,4,3,2,1]
  // [1,4,3,2,5]
  // 
  // [_,4,3,2,5]
  // [_,2,3,4,5]
  //
  // [_,_,3,4,5]
  
  for (int i = 0 ; i < n; ++i) {
    int index_min = i;
    for (int j = i; j < n; ++j) {
      if (vi[j] < vi[index_min])
        index_min = j;
    }
    swap(&(vi[index_min]), &(vi[i]));
  }
}









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
