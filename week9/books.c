#include <stdio.h>

typedef struct {
  char* author,*title, *publisher;
  int num_pages, date;
} book_t;

void fake_function(book_t *b);



int main() {
  book_t book;
  fake_function(&book);
  return 0;
}

void fake_function(book_t *b) {
  printf("b is: %p", b);
}
