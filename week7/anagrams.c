#include <stdio.h>

void get_string(char* str);
int sstrlen(char* s);


int main(int argc, char const* argv[])
{
  char str_in[256];
  get_string(str_in);
  printf("%s is_palindrome (len = %d): %d\n", str_in, sstrlen(str_in), palindrome(str_in));
  return 0;
}


int sstrlen(char* s) {
  int i = 0;
  while (s[i] != '\0')++i;
  return i;
}

