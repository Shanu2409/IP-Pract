//Programs on structures.

#include <stdio.h>

struct Person {
  int citNo;
  float salary;
} person1;

int main() {

  person1.citNo = 1984;
  person1. salary = 2500;

  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}