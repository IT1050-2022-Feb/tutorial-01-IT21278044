/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int marks1,marks2,sum,avg;
  printf("Enter the subjet 1 marks :");
  scanf("%d",&marks1);
  printf("Enter the subject 2 marks :");
  scanf("%d",&marks2);
  
  sum=marks1+marks2;
  avg = sum/2;
  
  printf("Average : %d",avg);
  
  return 0;
}

