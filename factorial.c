//program to print factorial of a number
#include<stdio.h>  
int main()    
{    
 int i,f=1,n;    
 printf("Enter a number: \n");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++)
    {    
      f=f*i;    
    }    
  printf("Factorial of %d is: %d",n,f);    
return 0;  
}

