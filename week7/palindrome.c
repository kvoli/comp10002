#include <stdio.h>

int palindrome(char* s);
void get_string(char* str);
int p_helper(char* s, int l, int r);
int sstrlen(char* s);

int main(int argc, char const* argv[])
{
  char str_in[256];
  get_string(str_in);
  printf("%s is_palindrome (len = %d): %d\n", str_in, sstrlen(str_in), palindrome(str_in));
  return 0;
}
int palindrome(char* s) {
  return p_helper(s, 0, sstrlen(s)-1);
}

int p_helper(char* s, int l, int r) {
  if (l >= r)
    return 1;
  return (s[l] == s[r] ? p_helper(s, l+1, r-1) : 0);
}

int sstrlen(char* s) {
  int i = 0;
  while (s[i] != '\0')++i;
  return i;
}

void get_string(char* str) {
  scanf("%s", str);
}
