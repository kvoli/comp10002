#include <stdio.h>

#define CELSIUS 'C'
#define FAHRENHEIT 'F'


int main(){

  double degrees_in;
  char type_in;

  scanf("%lf%c", &degrees_in, &type_in);


  if (type_in == CELSIUS) {
    // do something
  } else {
    // do something else
  }

}
