#include <stdio.h>


// a,b whether frequency of all the characters in a is the same for b
// if a is a permutation of b


int main(int argc, char const* argv[])
{
  
  return 0;
}


// nerv vren
// enrv enrv
// method (1) sorting and comparing
// O(nlogn) + O(n) = O(nlogn)


// method (2) 
// O(n)
//
// string a,b in [a-z], 26 possible characters in a or b.
//
// [a,b,c,d,...,z]
// [0,3,2,1,...,0] for both a and b



#define ALPHA_N 26

void set_zeros(int* vi, int n) {
  for (int i =0; i < n; ++i) vi[i] = 0;
}

// O(n)
// "ab" "ba"
int is_anagram(char* a, char* b) {

  // calculating the length of the string O(n)
  if (strlen(a) != strlen(b)) return 0;

  // O(10e5) = O(1) constant time 
  int freq_a[ALPHA_N];
  int freq_b[ALPHA_N];
  set_zeros(freq_b);
  set_zeros(freq_a);

  // O(n)
  for (int i = 0; i < strlen(a); ++i) {
    freq_a[a[i] - 'a']++;
    freq_b[b[i] - 'a']++;
  }

  // O(26)
  for (int i=0; i < ALPHA_N; ++i) {
    if (freq_b[i] != freq_a[i]) return 0;
  }

  return 1;
}













