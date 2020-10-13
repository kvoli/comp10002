#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define BLOCK_SIZE 5 

typedef struct carray carray_t;

typedef struct {
  int num;
} data_t;

struct carray {
  data_t* array;
  int left, right, size, capacity;
};

void push(carray_t* carray, data_t data);
data_t pop(carray_t* carray);
carray_t* new();
int check_capacity(carray_t* carray);

int main(){
  return 0;
}

void push(carray_t* carray, data_t data) {
  // check sizing
  if (check_capacity(carray))
    return;

  int insert_index = (carray -> right + 1) % carray -> capacity;
  carray -> array[insert_index] = data;
  carray -> right = insert_index;
  carray -> size++;
}

data_t pop(carray_t* carray) {
  data_t res = {0};
  if (carray -> size > 0) {
    res = carray -> array[carray -> right];
    carray -> right = (carray -> right - 1 + carray -> capacity) % carray -> capacity;
  }
  return res;
}

carray_t* new() {
  data_t* array = (data_t*)calloc(BLOCK_SIZE, sizeof(data_t));
  assert(array != NULL);
  carray_t* carray = (carray_t*)malloc(sizeof(carray_t));
  assert(carray != NULL);
  carray -> array = array;
  carray -> capacity = BLOCK_SIZE;
  carray -> left = 0;
  carray -> right = 0;
  carray -> size = 0;
  return carray;
}

int check_capacity(carray_t* carray) {
  return carray -> size >= carray -> capacity-1;
}



