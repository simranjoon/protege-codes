//to check if the square root of the number is prime or not
#include<stdio.h>
#include <math.h>

int main()
{
    int i,n,a,check=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Square root of the number is:%.2f\n",sqrt(n));
    a=sqrt(n);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            check=1;
            break;
        }
    }
    if(check=0)
    {printf("The square root is not prime");}
    else
    {printf("The square root is prime");}
    return 0;
}


