#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ASCII_ZERO 48
#define ASCII_NINE 57

int my_atoi(const char* str);
int cov_char(char c);
int valid_char(char c);

int main(int argc, char const* argv[])
{
  char str[] = "987654321";
  printf("%d\n", my_atoi(str));
  return 0;
}

int my_atoi(const char* str) {
  int n = strlen(str), total = 0;
  for (int i=0;i<n; ++i){
    total = total*10 + cov_char(str[i]);
  }
  return total;
}

int cov_char(char c) {
  return c - '0';
}

int valid_char(char c) {
  return c > ASCII_ZERO && c < ASCII_NINE;
}
