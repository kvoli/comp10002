#include <stdio.h>
#include <math.h>

typedef struct {
  double x,y;
} vector_t;

typedef struct {
  vector_t points[100];
  int n;
} polygon_t;

double distance(vector_t v1, vector_t v2);
double perim(polygon_t* p);

int main() {
  vector_t v1 = {0,0};
  vector_t v2 = {2,0};
  vector_t v3 = {2,2};
  vector_t v4 = {0,2};
  polygon_t p;
  p.n = 4;
  p.points[0] = v1; 
  p.points[1] = v2; 
  p.points[2] = v3; 
  p.points[3] = v4; 
  printf("Perim is %f", perim(&p));
  return 0;
}

double distance(vector_t v1, vector_t v2) {
  double d1 = pow((v1.x - v2.x), 2);
  double d2 = pow((v1.y - v2.y), 2);
  return sqrt(d1 + d2);
}

double perim(polygon_t* p) {
  double total = 0;
  int n = p -> n;
  for (int i =1; i < n; ++i) 
    total += distance(p -> points[i-1], p -> points[i]);
  total += distance(p -> points[n-1], p -> points[0]);
  return total;
}

