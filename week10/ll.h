typedef struct node node_t;
typedef struct data data_t;

struct data {
  int num;
};

struct node {
  data_t data;
  node_t* next;
};

// legit funcs
node_t* new_node();
node_t* push_node(data_t data, node_t* head);
node_t* pop_node(node_t* head);

// helper funcs
node_t* conv_from_arr(int* vi, int n);
data_t new_data(int num);
int read_array(int* vi);
void display_ll(node_t* head);
void display_array(int* vi, int n);
