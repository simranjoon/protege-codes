#include<stdio.h>

int main()
{
    char c;
    printf("Enter the operation you want to perform\n");
    scanf("%c",&c);
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a number\n");
    scanf("%d",&b);
     if(c== '+')
    {printf("a+b=%d\n",a+b);}
    else if (c== '/')
    {printf("a/b=%d\n",a/b);}
     else if (c== '-')
    {printf("a-b=%d\n",a-b);}
     else if (c== '*')
    {printf("a*b=%d\n",a*b);}
     else 
     {printf("Invalid");}
    return 0;
}
//Input the operator,input 2 numbers,use if else,print accordingly
