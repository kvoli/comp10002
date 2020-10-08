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
data_t pop(stack_t* stack);
stack_t* new_stack();

int main() { 
  return 0;
}

data_t pop(stack_t* stack) {
  data_t res = stack -> head -> data;
  stack -> head = pop_node(stack -> head);
  return res;
}

void push(data_t data, stack_t* stack) {
  stack -> head = push_node(data, stack -> head);
}

stack_t* new_stack() {
  stack_t* stack = (stack_t*) malloc(sizeof(stack_t));
  assert(stack != NULL);
  stack -> size = 0;
  stack -> head = NULL;
  return stack;
}
