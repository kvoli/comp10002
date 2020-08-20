#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv) {

  int c;
  int nwords, nchars, nlines;
  nwords = nchars = nlines = 0;

  int inaword = 0; // not currently in a word = 0, else 1

// 4.7 (words) nwords - > control variable - track whether im in a word

  while (c = getchar() != EOF) {
    // do something with c here!
    if (c == '\n') {
      nlines++;
    }

    // is c in [a-zA-Z]
    // _______mary
    if (isalpha(c)) {
      if (inaword) {
        nwords++;
      }
      inaword = 1;
    } else {
      inaword = 0;
    }
    nchars++;
  }

  printf("Lines: %d\n", nlines);
  printf("Chars: %d\n", nchars);
  printf("Words: %d\n", nwords);

  return 0;
}
