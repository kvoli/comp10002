#include <stdio.h>


int main(int argc, char const* argv[])
{
  
  return 0;
}



// first method: O(nlogn)
// enrv enrv 
// sort(a), sort(b) <----- sorting takes a minimum of nlogn
// string_a[i] == string_b[i] <-- O(n)


// [a-zA-Z]
// second method: O(n) for a suitably small alphabet
//
// maintain two arrays [], []
int is_anagram(char* a, char* b) {
int n_a, n_b;
  n_a = sstrlen(a);
  n_b = sstrlen(b);
  if (n_a != n_b) return 0;

  int freq_a[10e5];
  int freq_b[26];

  for (int i = 0; i < n_a; ++i) {
    freq_a[a[i] - 'a']++;
    freq_b[b[i] - 'a']++;
  }

  for (int i =0 ; i < 10e5; ++i)
    if (freq_a[i] != freq_b[i]) return 0;

  return 1;
}


void set_array(int* a) {
  for (int i =0 ; i < 26; ++i) a[i] = 0;
}

int sstrlen(char* s) {
  int i = 0;
  while (s[i] != '\0')++i;
  return i;
}
