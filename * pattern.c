# include <stdio.h>
int main( )
{
 int i, j, n=7;
 for(i=0;i<n;i++)
 { 
     for (j=0;j<n-i;j++)
     {
         printf("* ");
     }
     if(i==0)
     {
         for(j=0;j<n-1;j++)
         {
             printf("* ");
         }
     }
     else
    {
        for(j=0;j<2*i-1;j++)
         {
            printf("  ");
         }
         for(j=0;j<n-i;j++)
         {
            printf("* ");
         }
             
    }
     printf("\n");
}
return 0 ;
}
