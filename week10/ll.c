#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include "ll.h"


int main() {
  int vi[100];
  int n = read_array(vi);
  display_array(vi, n);
  node_t* head = conv_from_arr(vi, n);
  // node_t* head = push_node(new_data(1), NULL);
  // head = push_node(new_data(2), head);
  display_ll(head);
  return 0;
}

node_t* new_node() {
  node_t* nnode = (node_t*) malloc(sizeof(node_t));
  assert(nnode != NULL);
  return nnode;
}

// pushes a new node onto our linked list (new head)
node_t* push_node(data_t data, node_t* head) {
  node_t* nnode = new_node();
  nnode -> data = data;
  // handle 0 node case
  if (head != NULL) 
    nnode -> next = head;
  return nnode;
}

// pops a node and returns the new head
node_t* pop_node(node_t* head) {
  if (head == NULL) return head;
  node_t* new_head = head -> next;
  free(head);
  return new_head;
}


/****************************************************/

node_t* conv_from_arr(int* vi, int n) {
  node_t* res = push_node(new_data(vi[0]), NULL);
  for (int i = 1; i < n; ++i)  {
    res = push_node(new_data(vi[i]), res);
  }
  return res;
}

data_t new_data(int num) {
  data_t data;
  data.num = num;
  return data;
}

void display_array(int* vi, int n) {
  printf("[");
  for (int i = 0; i < n-1; ++i)
    printf("%d,", vi[i]);
  printf("%d]\n", vi[n-1]);
}

int read_array(int* vi) {
  int i = 0;
  while(scanf("%d", (vi+i)) == 1) 
      i++;
  return i;
}

void display_ll(node_t* head) {
  if (head != NULL) {
    printf("( %d ) -> ", head -> data.num);
    display_ll(head -> next);
  } else {
    printf("( NULL )\n");
  }
}
