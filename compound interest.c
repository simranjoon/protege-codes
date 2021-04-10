#include<stdio.h>
#include <math.h>
 
int main() 
{
   float PA, ROI, Time_Period, CIFuture, CI;
 
   printf("\nPlease enter the Principal Amount : \n");
   scanf("%f", &PA);
 
   printf("Please Enter Rate Of Interest : \n");
   scanf("%f", &ROI);
 
   printf("Please Enter the Time Period in Years : \n");
   scanf("%f", &Time_Period);
 
   CIFuture = PA * (pow(( 1 + ROI/100), Time_Period));
   CI = CIFuture - PA;
   
   printf("\nFuture Compound Interest for Principal Amount %.2f is = %.2f", PA, CIFuture);
   printf("\nCompound Interest for Principal Amount %.2f is = %.2f", PA, CI);
 
   return 0;
}
