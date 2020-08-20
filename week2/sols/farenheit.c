#include <stdio.h>

int main(int argc, char** argv) {
  double degrees_f;
  double degrees_c;

  printf("Enter degrees F: ");
  
  scanf("%lf", &degrees_f);
  
  degrees_c = (degrees_f - 32) * (5.0/9.0);

  printf("In degrees C is: %.1f\n", degrees_c);
  
  return 0;
}
