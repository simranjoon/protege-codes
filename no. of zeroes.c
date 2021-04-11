#include<stdio.h>
int count_digit(int num)
{
static int count=0;
 if(num>0)
 {
 if(num%10==0)
 count++;
 count_digit(num/10);
 }
 return count;
}
int main()
{
 int n;
 printf("Simran Joon\n");
 printf("Enter a number:\n");
 scanf("%d",&n);
 p
