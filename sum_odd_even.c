#include<stdio.h>
 
int main()
{
  int i, n, Even_Sum = 0, Odd_Sum = 0;
 
  printf("Please Enter the Maximum Limit Value : ");
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        Even_Sum = Even_Sum + i;
  	}
  	else
  	{
  		Odd_Sum = Odd_Sum + i;
	}
  }
  printf("\n The Sum of Even Numbers upto %d  = %d", n, Even_Sum);
  printf("\n The Sum of Odd Numbers upto %d  = %d", n, Odd_Sum);

  return 0;
}
