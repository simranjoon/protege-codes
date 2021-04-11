#include<stdio.h>
int main()
{
 
 long int binaryNumber,decimalNumber=0,j=1,remainder;
 printf("Simran Joon\n");
 printf("Enter any number any binary number: \n");
 scanf("%ld",&binaryNumber);
 while(binaryNumber!=0)
 {
 remainder=binaryNumber%10;
 decimalNumber=decimalNumber+remainder*j;
 j=j*2;
 binaryNumber=binaryNumber/10;
 }
 
 printf("Equivalent decimal value: %ld",decimalNumber);
 return 0;
}
