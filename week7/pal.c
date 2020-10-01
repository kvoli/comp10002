#include <stdio.h>


int is_palindrome(char* c);
int pal_helper(char* c, int l, int r);
int string_length(char* c);

int main(int argc, char const* argv[])
{
  
  return 0;
}
  
int is_palindrome(char* c) {
  return pal_helper(c, 0, string_length(c)-1);
}


int pal_helper(char* c, int l, int r) {
  // "anna"
  if (l >= r)
    return 1;
  if (c[l] == c[r])
    return pal_helper(c, l+1, r-1);
  return 0;
}


// ['h','i','\0']
int string_length(char* c) {
  int i;
  for (i =0; c[i] != '\0'; ++i) ;
  return i;
}
