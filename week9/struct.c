#include <stdio.h>
#include <stdlib.h>



// [0,0,0,0,0,0,0,0] stack
// heap 


typedef struct {
  int p_int;
  double p_dub;
} pnums_t;

typedef struct {
    int* A;
    int size;
    int capacity;
} array_t;

void write_ones(pnums_t pnums) {
  
  pnums.p_int = 1;
  pnums.p_dub = 1.0;
}
void resize_array(array_t *array){
    if (array -> size == array -> capacity){
        array -> A = realloc(array -> A, sizeof(int) * array->capacity * 2);
        assert(array -> A != NULL);
        array -> capacity = 2*array->size;
    }
}
int* make_array(int n){
    int* new_array = (int*) malloc(n * sizeof(1));
    assert (new_array != NULL);
    return new_array;
}

// array_t* make_array(int n){
//
    // int* A = (int*) calloc(n, size_of(1));
    // array_t* new_array = (array_t*) malloc(sizeof(array_t));
    // assert (new_array != NULL && A != NULL);
    // new_array -> A = A;
    // new_array -> size = n;
    // new_array -> capacity = n;
    // return new_array;
// }

int main()
{
  // struct Book book;
  // book.author = "Austen";
  // book.title = "Nothing Book";
  // book.publisher = "Penguin";
  // book.num_pages = 100;
  // book.date = 1010100;
  // printf("author: %s, title: %s, publisher: %s, num_pages: %d, date: %d\n", book.author, book.title, book.publisher, book.num_pages, book.date);
  pnums_t pnums;
  write_ones(pnums);
  printf("pnums.p_int = %d, pnums.p_dub = %f\n", pnums.p_int, pnums.p_dub);
  return 0;
}




































