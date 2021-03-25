
#include <stdio.h>

//Function to get sum of digits 
int getSum(int n)
{
	int sum = 0;
	while (n != 0) 
    {
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}

int main()
{
	int n;
    printf("Please enter a number:\n");
    scanf("%d",&n);
	printf("Sum of the digits:%d ", getSum(n));
	return 0;
}
