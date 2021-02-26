//To check if the entered character is uppercase or lowercase
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(ch >= '0' && ch <= '9')
    {printf("The character is a digit");}
    if(ch >= 'A'&& ch <= 'Z')
    {printf("The character is an uppercase alphabet");}
    else if(ch >= 'a' && ch <= 'z')
    {printf("The character is a lowercase alphabet");}
    else
    {printf("Invalid");}
    return 0;
}
