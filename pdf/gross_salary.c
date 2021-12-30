#include <stdio.h>
int main(void) 
{
   int gross_salary, basic, da, ta;
 
   printf("\nEnter basic salary : ");
   scanf("%d", &basic);
 
   da = (10 * basic) / 100;
   ta = (12 * basic) / 100;
 
   gross_salary = basic + da + ta;
 
   printf("Gross salary : %d", gross_salary);
}
