#include<stdio.h>
int main()
{
      int n,i;
      float sum=0;
      printf("1^2+2^2+3^2+4^2...N^2\n");
      printf("Enter Value of N : \n");
      scanf("%d",&n);
      sum = (n * (n + 1) * (2 * n + 1 )) / 6.0;
      printf("\n");
      for(i =1;i <= n;i++)
      {
            if (i!=n)
                  printf("%d^2 + ",i);
            else
                  printf("%d^2 ",i);
      }
      printf("\nSum of Series = %.2f",sum);
      return 0;
}
