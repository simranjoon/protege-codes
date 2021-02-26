//To print the greatest of the three given integers
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a >= b && a >= c)
    {printf("%d is the greatest integer",a);}
    if(b >= a && b >= c)
    {printf("%d is the greatest integer",b);}
    if(c >= a && c >= b)
    {printf("%d is the greatest integer",c);}
    return 0;
}
