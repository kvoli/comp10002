#include <stdio.h>

int my_isupper(char c);
char my_tolower(char c);

int main(int argc, char const* argv[])
{
  char c;
  while(scanf("%c", &c) == 1)
    printf("%c -> %c\n", c, my_tolower(c));
  return 0;
}

int my_isupper(char c) {
  return c >= 'A' && c <= 'Z';
}

char my_tolower(char c) {
  return my_isupper(c) ? (char) c+32 : c;
}
