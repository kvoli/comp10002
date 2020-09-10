#include <stdio.h>



// [1,2,3,4,4,4,4]


// return the index of the first element that matches key, if there are none it should return  -1
int binary_search(int* vi, int left, int right, int key) {
  if (left <= right) {
    int mid = left + (right - left) / 2;

    // case (1) vi[mid] == key
    if (vi[mid] == key) {
      // need to implement finding the leftmost occurrence of key
      return left_most(vi, left, key, mid);
    }
    // case (2) vi[mid] > key (key must be to the left of mid)
    if (vi[mid] > key) {
      return binary_search(vi, left, mid-1, key);
    }
    // case (3) vi[mid] < key
    if (vi[mid] < key) {
      return binary_search(vi, mid+1, right, key);
    }
  }
  return -1;
}
