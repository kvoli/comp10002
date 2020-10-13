#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "ll.h"

typedef struct stack stack_t;

struct stack {
  node_t* head;
  int size;
};

void push(data_t data, stack_t* stack);
void pop(stack_t* stack);
int empty(stack_t* stack);
data_t peek(stack_t* stack);
stack_t* new_stack();

int main() { 
  return 0;
}

void pop(stack_t* stack) {
  stack -> head = pop_node(stack -> head);
}

void push(data_t data, stack_t* stack) {
  stack -> head = push_node(data, stack -> head);
}

int empty(stack_t* stack) {
  return stack -> size  > 0;
}

data_t peek(stack_t* stack) { 
  data_t nil = {0};
  return empty(stack) ? stack -> head -> data : nil;
}

stack_t* new_stack() {
  stack_t* stack = (stack_t*) malloc(sizeof(stack_t));
  assert(stack != NULL);
  stack -> size = 0;
  stack -> head = NULL;
  return stack;
}
