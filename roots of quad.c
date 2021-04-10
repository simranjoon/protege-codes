#include <stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	float root1, root2, imaginary, d;
	
	printf("Please Enter values of a, b, c of Quadratic Equation :  /n");
  	scanf("%f%f%f", &a, &b, &c);
  	
  	d = (b * b) - (4 * a *c);
  	
  	if(d > 0)
  	{
  		root1 = (-b + sqrt(d) / (2 * a));
  		root2 = (-b - sqrt(d) / (2 * a));
		printf("Two Distinct Real Roots Exists: root1 = %.2f and root2 = %.2f\n", root1, root2);
  	}
  	else if(d == 0)
  	{
  		root1 = root2 = -b / (2 * a);
  		printf("Two Equal and Real Roots Exists: root1 = %.2f and root2 = %.2f\n", root1, root2);
  	}
  	else if(d < 0)
  	{
  		root1 = root2 = -b / (2 * a);
  		imaginary = sqrt(-d) / (2 * a);
  		printf("Two Distinct Complex Roots Exists: root1 = %.2f+%.2f and root2 = %.2f-%.2f\n", root1, imaginary, root2, imaginary);
  	}
	
  	return 0;
}
