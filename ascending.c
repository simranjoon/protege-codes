//To print the three given integers in ascending order
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d  %d  %d",&a,&b,&c);
    if( a >= b && a >= c)
    {
        if(b>=c)
        {
            printf(" Ascending order : %d %d %d",c,b,a);
        }
        else
        {
            printf("\n Ascending order : %d %d %d",b,c,a);
        }
    }
    else if( b >= a && b >= c )
    {
        if(a>=c)
        {
            printf("\n Ascending order : %d %d %d",c,a,b);
        }
        else
        {
            printf("\n Ascending order : %d %d %d",a,c,b);
        }
    }
    else if( c >= a && c >=b )
    {
        if(a >= b)
        {
        printf("\n Ascending order : %d %d %d",b,a,c);
        }
        else
        {
            printf("\n Ascending order : %d %d %d",a,b,c);
        }
    }
     return 0;
}
