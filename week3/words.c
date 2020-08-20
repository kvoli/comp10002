#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NEWLINE '\n'

int
main(int argc, char *argv[]) {

	int nlines=0, nchars=0, nwords=0;
  int inaword = 0;
	int c;

	/* read characters from the input, counting newlines */
	printf("Enter text:\n");
	while ((c=getchar()) != EOF) {
    if (c == NEWLINE)
      nlines++;

    if (isalpha(c)) {
      if (!inaword) {
        nwords++;
      }
      inaword = 1;
    } else {
      inaword = 0;
    }
    nchars++;
  }

	printf("Lines: %6d\n", nlines);
  printf("Words: %6d\n", nwords);
	printf("Chars: %6d\n", nchars);

	return 0;
}
