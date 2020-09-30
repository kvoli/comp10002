#include <stdlib.h>
#include <stdio.h>

typedef struct {
  char title[50], first[50], middle[50], last[50];
} name_t;

typedef struct {
  int day, month, year;
} date_t;

typedef struct {
  date_t start, end;
  name_t partner;
} marriage_t;

typedef struct {
  int year, net_income, tax_liability;
  date_t tax_paid_on;
} work_t;

// important struct here!
typedef struct {
  name_t name_data; // title, first, middle, last
  marriage_t engagements[10]; // list of up to 10 marriage /divorces
  work_t working_years[100];
  date_t death;
} person_t;

typedef struct {
  int num_people;
  person_t people[30000000];
} country_t;


// person
// char* title, given, middle, family [50]
// date_t marriage (who), divorces, death, flag
// work_t* year, net_income, tax_liability (int), date_paid


double avg_age_death(country_t* country) {
  long total = 0;
  for (int i = 0 ; i < country -> num_people; ++i) {

  }
  return total / (1.0 * country -> num_people);
}


int main() {
  return 0;
}
