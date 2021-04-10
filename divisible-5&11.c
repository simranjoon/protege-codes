#include<stdio.h>
 
int main()
{
  	int n;
 
  	printf("Please Enter any Number to Check whether it is Divisible by 5 and 11 : ");
  	scanf("%d", &n);
  
  	if (( n % 5 == 0 ) && ( n % 11 == 0 ))
     	printf("\n Given number %d is Divisible by 5 and 11", n);
 
  	else
    	printf("\n Given number %d is Not Divisible by 5 and 11", n);
 
  return 0;
}
