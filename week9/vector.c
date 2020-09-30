#include <stdio.h>
#include <math.h>

typedef struct {
  double x,y;
} vector_t;

typedef struct {
  vector_t* points;
  int num_points;
} polygon_t;

typedef struct {
  double real,imaginary;
} complex_t;

double distance(vector_t p1, vector_t p2);
double perimeter(polygon_t p);
complex_t add(complex_t v1, complex_t v2);
complex_t multiply(complex_t v1, complex_t v2);

int main() {
  vector_t vec1 = {2.0, 2.0};
  vector_t vec2 = {4.0, 4.0};
  double dist = distance(vec1, vec2);
  printf("The distance is %f\n", dist);
  vector_t vi;
  return 0;
}

double distance(vector_t p1, vector_t p2) {
  double v1,v2;
  v1 = (p1.x - p2.x) * (p1.x - p2.x);
  v2 = (p1.y - p2.y) * (p1.y - p2.y);
  return sqrt(v1 + v2);
}

complex_t add(complex_t *v1, complex_t *v2) {
  v1.imaginary += v2.imaginary;
  v1.real += v2.real;
  return v1;
} 
