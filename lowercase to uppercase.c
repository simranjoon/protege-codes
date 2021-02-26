//to convert lowercase to uppercase
#include <stdio.h> 

int main()
{
  char c;
 
  printf("Enter any alphabet\n");
  scanf(" %c", &c);
  
  if (c>=97 && c<=122)
    {  
      c = c-32; 
      printf ("The Uppercase character is %c", c);
    }
   else
    {
      printf("It is an Uppercase Character");
    }  
  
  return 0;
  }
