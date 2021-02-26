//To check whether a no. is prime or not

#include <stdio.h>
int main() 
{
     int flag=0;
     int n;
     printf("Enter a no.\n");
     scanf("%d",&n);

    for(int a=2;a<=n-1;a++)
    {
        if(n%a==0)
        { flag=1;
        break;}

    }

        if(flag ==0)
        {printf("Its a prime no.");}
        else
        {printf("Its not a prime no.");}
        return 0;

      
}
