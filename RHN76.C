Program-1: Write a Program to make use of basic I/Q functions using different data types.

Solution-2: User Defined Values
#include <stdio.h>
int main()
{
  int rollnum;
  float per;
  char grade;
 
  printf("\nEnter Student Roll Num: ");
  scanf("%d", &rollnum);

  printf("\nEnter Student Percentage: ");
  scanf("%f", &per);

  printf("\nEnter Student Grade: ");
  scanf(" %c", &grade);

  printf("\n----- Student Info -----\n");
  printf("\nRoll Num is: %d", rollnum);
  printf("\nRoll Num is: %d", rollnum);
  printf("\nGrade: %c\n", grade);

  return 0;

  }
