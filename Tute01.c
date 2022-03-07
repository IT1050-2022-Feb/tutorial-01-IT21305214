/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int i;
   float mark, sum = 0, avg;
   printf("Input marks of two subjects: ");
   for(i = 0; i < 2; i++)
   {
      scanf("%f", &mark);
      sum = sum + mark;
   }
   avg = sum / 2;
   printf("\nAverage mark of two subjects = %0.2f", avg);
   getchar();
   
  
  return 0;
  }

