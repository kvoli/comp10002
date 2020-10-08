#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

typedef struct tree tree_t;
typedef struct data data_t;

struct data {
  int num;
};

struct tree {
  tree_t *left, *right;
  data_t data;
};

// important stuff
tree_t* new_tree();
tree_t* insert(data_t data, tree_t* root);
int cmp(data_t a, data_t b);

// helpers
data_t new_data(int num);

int main() {
  
  return 0;
}

tree_t* new_tree() {
  tree_t* new_tree = (tree_t*) malloc(sizeof(tree_t));
  assert(new_tree != NULL);
  new_tree -> left = NULL; new_tree -> right = NULL;
  return new_tree;
}

// return 1 if left > right, else 0
int cmp(data_t a, data_t b) {
  return a.num > b.num;
}

tree_t* insert(data_t data, tree_t* root) {
  if (root == NULL) {
    tree_t* res = new_tree();
    res -> data = data;
    return res;
  } else if (cmp(data, root -> data)) {
    // if insert > root, insert to the right
    return insert(data, root -> right);
  } else {
    // if insert <= root, insert to the left
    return insert(data, root -> left);
  }
}

data_t new_data(int num) {
  data_t data;
  data.num = num;
  return data;
}
