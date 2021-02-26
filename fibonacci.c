//to print fibonacci series
#include <stdio.h>
int main() 
{
    int i, n, t1=1, t2 = 1, t3;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) 
   {
        printf("%d, ", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    return 0;
}
