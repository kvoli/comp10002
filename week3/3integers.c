#include <stdio.h>
#include <ctype.h>

int main() {
  int x,y,z;
  scanf("%d %d %d", &x,&y,&z);
  if (getchar() != EOF) {
    printf("ERROR - TOO MANY");
  }
  printf("%d %d %d", x,y,z);

  return 0;
}
