#include <stdio.h>
 


int main(int argc, char** argv) {
  
  double degrees;

  if(scanf("%lf", &degrees) != 1) {

    printf("Error in taking input");
    return 1;
  }

  double conversion = (degrees - 32) * (5.0/9.0);

  printf("Converted: %f", conversion);

  return 0;
}
