#include <stdio.h>


#define CELSIUS 'C' 
#define FARENHEIT 'F'

int main(int argc, char** argv) {
  double degrees_in;
  double degrees_out;
  char type_out;
  char type_in;

  printf("Enter a temperature: ");
  
  scanf("%lf%c", &degrees_in, &type_in);

  if (type_in == CELSIUS) {
    type_out = FARENHEIT;
    degrees_out = degrees_in * (9.0/5.0) + 32;
  } else {
    type_out = CELSIUS;
    degrees_out = (degrees_in - 32) * (5.0/9.0);
  }
  
  printf("The temperature %.1f%c converts to %.1f%c\n", degrees_in, type_in, degrees_out, type_out);
  return 0;
}
