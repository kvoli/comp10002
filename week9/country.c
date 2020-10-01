#include <stdio.h>

typedef struct {
  int day,month,year;
} date_t;

typedef struct {
  char given[50], middle[50], family[50];
} name_t;

typedef struct {
  int year, tax_liability, net_income;
  date_t tax_paid;
} work_t;

typedef struct {
  date_t marriage, divorce;
  name_t partner;
} partner_t;

typedef struct {
  date_t birth_date, death_date;
  partner_t relationships[10];
  name_t name;
  work_t working_years[100];
  int alive;
} person_t;

typedef struct {
  char name[50];
  person_t* citizens;
  int num_citizen;
} country_t;

double avg_death(country_t* country);

int main() {
  country_t australia;
  double avg_death = avg_death(&australia);
  return 0;
}

double avg_death(country_t* country) {
  double count = 0, total = 0;
  for (int i =0 ; i< (*country).num_citizen; ++i) {
    if (country->citizens[i].alive) {
      count++;
      total += country->citizens[i].death_date.year - country->citizens[i].birth_date.year;
    }
  }
  return total / count;
}


























